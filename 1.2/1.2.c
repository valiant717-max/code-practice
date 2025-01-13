#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Link{
	char r[500];
	int num;
	int l;
	int ll;
};
int compare(const void *a, const void *b) 
{
    Link *ha = (Link *)a;
    Link *hb = (Link *)b;
    if (ha->num != hb->num) return hb->num - ha->num;
    else//num==num
    {
    	if(ha->ll!=hb->ll) return ha->ll-hb->ll;
    	else
    	{
    		if(ha->l!=hb->l) return ha->l-hb->l;
    		else
    		{
    			return strcmp(ha->r, hb->r);
			}
		}
	}
}
int main()
{
	char w[100000];
	int lw=0;//len of word
	while(scanf("%c",&w[lw])!=EOF) ++lw;
	struct Link hws[lw/2];
	for(int i=0;i<lw/2;++i) hws[i].num=1;
	int nh=0;//number of huiwen
	for(int i=0;i<lw;++i)
	{
		if(w[i]<'0' || w[i]>'9') continue;
		else if('0'==w[i])
			for(;;++i) {if(w[i+1]<'0' || w[i+1]>'9') break;}
		else if(w[i+1]<'0' || w[i+1]>'9') {++i; continue;}
		else//至少两位的数字 
		{
			int len0=2; 
			for(;;++len0) {if(w[i+len0]<'0' || w[i+len0]>'9') break;}
			char arr[len0+1];
			arr[len0]='\0';
			int flag=1;
			for(int j=0;j<=(len0-1)/2;++j)
			{
				if(w[i+j]!=w[i+len0-1-j]) {flag=0; break;}
				arr[j]=w[i+j];
				arr[len0-1-j]=arr[j];
			}
			i+=(len0-1);
			if(0==flag) {continue;}
			else//是回文数 ,现在 1==flag 
			{
				//printf("%s\n",arr);
				for(int ii=0;ii<nh;++ii)
				{
					if(0==strcmp(arr,hws[ii].r)){++hws[ii].num; flag=0; break;}
				}
				if(1==flag)
				{
					hws[nh].l=len0;
					if(len0<10) hws[nh].ll=1;
					else if(len0<100) hws[nh].ll=2;
					else if(len0<1000) hws[nh].ll=3;
					for(int jj=0;jj<=len0;++jj) hws[nh].r[jj]=arr[jj];
					++nh;
				}
			}
			
		}
	}
	if(0==nh) {printf("None"); return 0;}
	// 对数组进行排序
    qsort(hws, nh, sizeof(Link), compare);
    for (int i = 0; i < nh && hws[i].num == hws[0].num; i++) 
		printf("%s %d\n",hws[i].r, hws[i].num);
	return 0;
}

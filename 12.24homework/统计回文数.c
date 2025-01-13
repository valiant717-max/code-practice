#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char ch[10000]={0};
	int i=0;
	while(scanf("%c",&ch[i])!=EOF) {
		i++;
	}
	int len=strlen(ch);
	char str[10000][10000];
	int k=0;//数字数组的个数 
	for(int j=0;j<len;j++){
		int p=0;//第k个数字数组的第P个元素 
		if(ch[j]>='0'&&ch[j]<='9'){
			str[k][p]=ch[j];
			while(ch[++j]>='0'&&ch[++j]<='9'&&j+1<len){
				str[k][++p]=ch[++j];
			}
		}
		else continue;
	}
	int max=0;
	int count=0;
	for(int i=0;i<k;i++){
		int temp=1;
		int len=strlen(str[i]);
		for(int j=0;j<len/2;j++){
			if(str[i][j]!=str[i][len-1-j])
			temp=0;
		}
		if(temp==1){
			if(len>max){
				max=len;
				count=i;
			}
	}
	}
	for(int i=0;i<max;i++){
		printf("%c",str[count][i]);
		printf(" %d",max);
	}
	return 0;
}


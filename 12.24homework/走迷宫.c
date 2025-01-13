#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n,m;
	char c;
	scanf("%d%d",&n,&m);
	c=getchar();
	char str[n+1][m+1];
	for(int i=0;i<n;i++){
		gets(str[i]);
	}
	int q;
	scanf("%d",&q);
	int x[q];
	int y[q];
	int step[q];
	for(int i=0;i<q;i++){
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
		scanf("%d",&step[i]);
	}
	for(int i=0;i<q;i++){
		for(int k=0;k<step[i];k++){
		if(str[x[i]-1][y[i]-1]=='U'){
			if(x[i]!=1)x[i]--;
			else x[i]=n;
		}
			else if(str[x[i]-1][y[i]-1]=='D'){
			if(x[i]!=n)x[i]++;
			else x[i]=1;
		}
			else if(str[x[i]-1][y[i]-1]=='L'){
			if(y[i]!=1)y[i]--;
			else y[i]=m;
		}
			else if(str[x[i]-1][y[i]-1]=='R'){
			if(y[i]!=m)y[i]++;
			else y[i]=1;
		}
	}
	printf("%d %d\n",x[i],y[i]);
	}
	return 0;
}

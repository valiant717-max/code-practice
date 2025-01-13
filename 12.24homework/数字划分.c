#include <stdio.h>
#include <stdlib.h>
int f(int n,int m){
	if(n==1||m==1)return 1;
	if(n<m) return(f(n,n));
	if(n==m) return (1+f(n,m-1));
	if(n>m) return (f(n-m,m)+f(n,m-1));
}
int main(int argc, char *argv[]) {
	int n=0;
	while(scanf("%d",&n)!=EOF){
	printf("%d\n",f(n,n));
}
	return 0;
}

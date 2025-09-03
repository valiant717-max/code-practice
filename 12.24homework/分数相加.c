#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
	if(b==0) return a;
	else return max(b,a%b);
}
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	int a,b,c=0,d=1; 
	for(int i=0;i<n;i++){
		scanf("%d/%d",&a,&b);
		c=c*b+a*d;//要先算c,先算d的话会影响c的计算 
		d=d*b;
	} 
	a=c;b=d;
	int t=max(a,b);//要先把最大公约数的值存起来 
	b=b/t;
	a=a/t;
	if(b!=1) 
	printf("%d/%d",a,b);
	else printf("%d",a);
	return 0;
}

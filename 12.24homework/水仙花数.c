#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int digit(int n){
	int count=0;
	while(n){
		n/=10;
		count++;
	}
	return count;
}
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m,n,sum;
		scanf("%d%d",&m,&n);
		int j=0; 
		for(int a=m;a<=n;a++){
			sum=0;
			int a1=a;
			while(a1){
				sum+=pow(a1%10,digit(a));
				a1/=10;
			}
		if(sum==a)
		{
			j++;
			printf("%d ",a);
		}
		}
		if(j==0)printf("-1");
		printf("\n");
	} 
	return 0;
}

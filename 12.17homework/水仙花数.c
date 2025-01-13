#include <stdio.h>
#include <math.h>
int digit(int n){
	int count=0;
	while(n){
		n/=10;
		count++;
	}
	return count;
}
int main()
{
	int m=0;
	int n=0;
	scanf("%d%d",&m,&n);
	int sum=0;
	int count=0;
	for(int i=m;i<n;i++){
		int sum=0;
		int k=i;
		while(k){
			int j=k%10;
			sum+=pow(j,digit(i));
			k/=10;
		}
		if(sum==i){
		printf("%d ",i);
		count++;
		}
}
	if(count==0)
	printf("no");
	return 0;
}

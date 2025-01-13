#include <stdio.h>
#include <stdlib.h>
int prime(int n){
	int temp=0;
	for(int i=2;i<n;i++){
		if(n%i==0)
		temp=1;
	}
	if(temp==1) return 0;
	else return 1;
}
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	if(n>6&&n%2==0){
		for(int i=3;i<=n/2;i+=2){
			if(prime(i)&&prime(n-i))
			printf("%d %d\n",i,n-i);
		}
	}
	else printf("ERROR"); 
	return 0;
}

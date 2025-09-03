#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	printf("%d=",n);
	int arr[100];
	int i=0;
	int count=0;
	while(n){
		arr[i++]=n%2;
		n/=2;
		count++;
	}
	for(int i=count-1;i>=0;i--){
		int k=1;
		if(arr[i]!=0){
			printf("2^%d",i);
		for(int j=i-1;j>=0;j--){
			if(arr[j]==1)k=0;
		}
		if(k==0)printf("+");
		}
	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	int arr[n/8];
	for(int i=0;i<n/8;i++){
		scanf("%d",&arr[i]);
	}
	int bin[n];
	for(int i=0;i<n/8;i++){
		for(int j=1;j<=8;j++){
			bin[(i+1)*8-j]=arr[i]%2;
			arr[i]=arr[i]/2;
		}
	}
	int k=0;
	int j=0;
	while(k<n){
	int count=0;
	while(bin[j]==bin[k]){
		j++;
		count++;
	}
	int num=0;
	num=bin[k]*pow(2,7)+count;
	printf("%d ",num);
	k=j;
}
	return 0;
}

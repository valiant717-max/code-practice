#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int arr[n/8];
	for(int i=0;i<n/8;i++){
		scanf("%d",&arr[i]);
	}
	int arr2[n+1];
	arr2[n]=2;
	for(int i=0;i<n/8;i++){
		for(int j=1;j<=8;j++){
			arr2[(i+1)*8-j]=arr[i]%2;
			arr[i]/=2;
		}
	}
	int i=0;
	while(arr2[i]!=2){
	int a=arr2[i];
	int count=0;
	while(arr2[i]==a){
		count++;
		i++;
	}
	int arr3[8];
	for(int j=1;j<=8;j++){
		arr3[8-j]=count%2;
		count/=2;
	}
	arr3[0]=a;
	int sum=0;
	for(int j=0;j<8;j++){
		sum+=arr3[j]*pow(2,7-j);
	}
	printf("%d ",sum);
}
	return 0;
}

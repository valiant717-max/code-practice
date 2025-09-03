#include <stdio.h>
#include <stdlib.h>
int bubble(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			int temp=0;
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr[n/2];
}
int main(int argc, char *argv[]) {
	int w,n;
	scanf("%d",&w);
	scanf("%d",&n); 
	int arr[n];
	int arr3[n]; 
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		arr3[i]=arr[i];
	} 
	if(w%2==1){
		int arr2[w];
		for(int j=0;j<n-w+1;j++){
		for(int i=0;i<w;i++){
			arr2[i]=arr3[i+j];
		}
		arr[j+(w-1)/2]=bubble(arr2,w);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	}
	else printf("ERROR");
	return 0;
}

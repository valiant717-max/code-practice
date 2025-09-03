#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	int arr[n];
	int arr2[100]={10000};
	int j=0;
	int count=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%3==0)
		{
		arr2[j++]=arr[i];
		count++;
		}
	}
	if(count>0){
	int min=arr2[0];
	for(int k=0;k<j;k++){
		if(arr2[k]<min)min=arr2[k];
	}
	printf("%d",min);
}
	else printf("Null");
	return 0;
}

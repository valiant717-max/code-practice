#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
	int temp=0; 
	int count=1;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			temp=0;
			if(arr[i]==arr[j]){
				temp=1;
				break;
			}
		}
		if(temp==0)count++;
	}
	printf("%d",count);
	return 0;
}

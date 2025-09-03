#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int arr[10];
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	} 
	for(int i=1;i<10;i++){
		if(arr[i]!=0){
		printf("%d",i);
		arr[i]--;
		break;
		}	
	}
	for(int j=0;j<10;j++){
		for(int i=0;i<arr[j];i++){
			printf("%d",j);
		}
	}
	return 0;
}

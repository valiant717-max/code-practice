#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int arr[3];
		for(int j=0;j<3;j++){
			scanf("%d",&arr[j]);
		}
		if(arr[0]>0&&arr[1]>0&&arr[2]>0){
		if((arr[0]*arr[0]==arr[1]*arr[1]+arr[2]*arr[2])
		||(arr[2]*arr[2]==arr[1]*arr[1]+arr[0]*arr[0])
		||(arr[1]*arr[1]==arr[0]*arr[0]+arr[2]*arr[2]))
		printf("Yes\n");
		else printf("No\n");
	}
	else printf("No\n");
	} 
	return 0;
}

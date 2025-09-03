#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	int arr[n][n];
	arr[n/2][n/2]=n*n;
	int num=1;
	for(int i=0;i<n/2;i++){
		for(int j=i;j<n-i-1;j++){
			arr[i][j]=num++;
		}
		for(int j=i;j<n-i-1;j++){
			arr[j][n-i-1]=num++;
		}
		for(int j=i;j<n-i-1;j++){
			arr[n-i-1][n-1-j]=num++;
		}
		for(int j=i;j<n-i-1;j++){
			arr[n-j-1][i]=num++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

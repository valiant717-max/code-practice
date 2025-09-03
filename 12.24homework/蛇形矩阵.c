#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	int arr[n][n];
	int num=1;
	for(int i=0;i<=2*(n-1);i++){
		if(i%2==0){
			int start_row=(i<n)?i:n-1;
			int j=start_row;
			while(j>=0&&i-j<n){
				arr[j][i-j]=num++;
				j--;
			}
		}
		else if(i%2==1){
			int start_col=(i<n)?i:n-1;
			int j=start_col;
			while(j<n&&j>=0&&i-j<n&&i-j>=0){
				arr[i-j][j]=num++;
				j--;
			}
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

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m=0;
		scanf("%d",&m);
		int arr[m];
		for(int j=0;j<m;j++){
			scanf("%d",&arr[j]);
		}
			for(int k=0;k<m;k++){
				int temp=0;
				for(int j=0;j<m-1-k;j++){
					if(arr[j]>arr[j+1])
					{
						temp=arr[j+1];
						arr[j+1]=arr[j];
						arr[j]=temp;
					}
					if(arr[j]==arr[j+1]){
						arr[j+1]=0;
					}
			}
		}
		for(int i1=0;i1<m;i1++){
			if(arr[i1]!=0)printf("%d ",arr[i1]);
		}
}
	return 0;
}

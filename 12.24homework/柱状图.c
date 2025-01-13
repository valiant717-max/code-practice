#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
		int m=0;
		scanf("%d",&m);
		int arr[m];
		char str[m];
		char ch;
		for(int j=0;j<m;j++){
			scanf("%d",&arr[j]);
			str[j]='+';
			scanf("%c",&ch);
			if(ch!=' '&&ch!='\n')
			{
				str[j]=ch;
			}
		}
		int max=arr[0],min=arr[0];
		for(int i=0;i<m;i++){
			if(arr[i]>max)max=arr[i];
			if(arr[i]<min)min=arr[i];
		}
		for(int k=max;k>0;k--){
			for(int i=0;i<m;i++){
				if(arr[i]<max)printf("  ");
				else printf("%c ",str[i]);
			}
			max--;
			printf("\n");
		}
		for(int k=0;k<m*2-1;k++){
			printf("-");
		}
		printf("\n");
		for(int k=0;k>min;k--){
			for(int i=0;i<m;i++){
			if(arr[i]<k)printf("%c ",str[i]);
			else printf("  ");
		}
			printf("\n");
		}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	if(n%2==1){
		printf("print\n");
		for(int j=0;j<n/2+1;j++){
			for(int i=0;i<n/2-j;i++){//空格每次变化奇数个 
				printf(" ");
			}
		for(int i=0;i<j*2+1;i++){//*每次变化偶数个 
			printf("*");
		}
		printf("\n");
	} 
	for(int j=0;j<n/2;j++){
		for(int i=0;i<j+1;i++){
			printf(" ");
		}
		for(int i=0;i<n-2*(j+1);i++){
			printf("*");
		}
		printf("\n");
	} 
}
	else printf("error");
	return 0;
}

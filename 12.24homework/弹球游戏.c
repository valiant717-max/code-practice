#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m;
		scanf("%d",&m);
		getchar();
		char str[1000]={0};
		gets(str);
		int arr[m+2];
		for(int j=0;j<m+1;j++){
			scanf("%d",&arr[j]);
		}
		arr[m+1]=0;
		char *index=strstr(str,"left");
		int count=0;
		while(index!=NULL){
			count++;
			index=strstr(++index,"left");//×¢Òâ++ÔÚÇ°£¡ 
		}
		char *index2=strstr(str,"right");
		int count2=0;
			while(index2!=NULL){
			 index2=strstr(++index2,"right");
			count2++;
		}
		int sum=(count2-count)/2+m/2+1;
		printf("%d %d",sum,arr[sum-1]);
		printf("\n");
	} 
	return 0;
}

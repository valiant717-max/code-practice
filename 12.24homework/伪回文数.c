#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int n=0;
	scanf("%d",&n);
	getchar();
	for(int k=0;k<n;k++){
	char arr[100]={0};
	scanf("%s",arr);
	int len=strlen(arr);
	int count=0;
	for(int i=0;i<len/2;i++){
		if(arr[i]!=arr[len-1-i])
		count++;
	}
	if(count==1)printf("yes\n");
	else printf("no\n");
}
	return 0;
}

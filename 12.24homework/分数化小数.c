#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d.",a/b);
	a=a%b;
	int arr[c+1];
	for(int j=0;j<c+1;j++){
		a*=10;
		arr[j]=a/b;
		a=a%b;
	}
	if(arr[c]>5)arr[c-1]++;
	int j=c-1;
	while(arr[j]>9){
		arr[j]=0;
		arr[--j]++;
	}
	for(int k=0;k<c;k++){
		printf("%d",arr[k]);
}
	} 
	return 0;
}

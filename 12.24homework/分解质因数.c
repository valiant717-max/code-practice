#include <stdio.h>
#include <string.h> 
int is_Prime(int n){
	if(n==2)return 1;
	for(int i=2;i<n;i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main() {
	int m=0;
	scanf("%d",&m);
	for(int g=0;g<m;g++){
	int n=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		while(is_Prime(i)&&n%i==0){
			n/=i;
			printf("%d",i);
			if(n>1)printf("*");
		}
		}
	printf("\n");
}
    return 0;
}

#include <stdio.h>
int main(){
	int a=0;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
	int n=0;
	scanf("%d",&n);
 	int count = 0;
   	for(int i=5;i<=n;i*=5){
   		count+=n/i;
	   } 
    printf("%d\n",count);
	}
	return 0;
}

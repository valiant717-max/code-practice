#include <stdio.h>
#include <stdlib.h>
int hanluota(int n,char from,char to,char aux){
	if(n==1)
	printf("1%c->%c\n",from,to);
	else{
		hanluota(n-1,from,aux,to);
		printf("%d%c->%c\n",n,from,to);
		hanluota(n-1,aux,to,from);
	}
} 
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n); 
	hanluota(n,'A','C','B');
	return 0;
}

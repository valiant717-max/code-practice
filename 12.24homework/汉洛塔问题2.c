#include <stdio.h>
#include <stdlib.h>
int i=0;//递归的时候要格外注意变量声明的位置 
void move(int n,char from,char through,char to){
	if(n==1){
	i++;
	printf("Step%d: Move Disk%d from %c to %c\n",i,n,from,to);
	}
	else {
		move(n-1,from,to,through);
		{
		i++;
		printf("Step%d: Move Disk%d from %c to %c\n",i,n,from,to);
		}
		move(n-1,through,from,to);
	}
}
int main(int argc, char *argv[]) {
	int n=0;
	char A,B,C;
	scanf("%d",&n);
	move(n,'A','B','C');
	return 0;
}

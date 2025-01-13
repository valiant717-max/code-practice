#include<stdio.h>
int fit(int n)
{
	if(n==1)
	return 1;
	if(n==2)
	return 2;
	if(n>2)
	return fit(n-1)+fit(n-2);  
}
int main()
{
    int n=0;
	scanf("%d",&n);
	
    return 0;
}

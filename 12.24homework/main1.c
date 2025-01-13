#include <stdio.h>
#include <stdlib.h>
int main(){
		int a,b,c,d; 
		scanf("%d %d",&a,&b);
		c=a<b?a:b;
		d=a>b?a:b;
		float f=0;
		int j=0; 
		if(a*b>0)
		{
		for(j=c;j<=d;j++)
		f=f+1.0/j;	
		printf("%.3f",f);
		}
		else
		{
		for(j=c;j<0;j++)
		{
		f=f+1.0/j;	
		}
		int e=0;
		for(e=1;e<=d;e++)
		{
		f=f+1.0/e;	
		}
		printf("%.3f",f);
		}
		printf("\n");
	return 0;
}

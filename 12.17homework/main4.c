#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a,b,c=0,d=1;	
	for(int i=1;i<=n;i++){		
	scanf("%d/%d",&a,&b);	
	c=a*d+b*c;		
	d=b*d;
}
a=c;
b=d;
	while(b){	//辗转相除求最大公约数	
	int c=a%b;	
	a=b;		
	b=c;	
}	
	c/=a;	
	d/=a;	
	if(d!=1) 	
	printf("%d/%d",c,d);
	else 
	printf("%d",c);
	return 0; 
}

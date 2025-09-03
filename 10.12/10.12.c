#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
/*	int volume=0;
	int weight=0;
	scanf("%d %d",&volume,&weight);
	if(weight<(volume/166))
	printf("according to volume weight:%d",volume/166);
	else
	printf("according to weight:%d",weight);
	
	
	int height,length,width,volume,weight;
		printf("enter height of box:");
	scanf("%d",&height);
		printf("enter length of box:");
	scanf("%d",&length);
		printf("enter width of box:");
	scanf("%d",&width);
	volume=height*width*length;
	printf("Volume(cubic inches):%d\n",volume);
	printf("dimensional weight (pound):%d\n",(volume+165)/166);
	
	
	int height,width,weight;
	printf("%d %d %d",height,width,weight);
	
	
	printf("%8c\n %7c\n %6c\n %c %5c\n %2c %4c\n %3c\n",*,*,*,*,*,*,*,*);
	printf("       *\n      *\n     *\n*   *\n * *\n  *\n");
	int r=0;
	int v=0;
	scanf("%d",&r);
	v=4.0f/3.0f*3.14f*r*r*r;
	printf("%d",v);
	
	
	int x=0;
	int a=0;
	int b=0; 
	scanf("%d",&x);
	a=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
	b=((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("%d\n",a);
	printf("%d",b);
	
	
	int a,b,c,d,h;
	scanf("%d",&h);
	a=h/20;
	h=h-20*a;
	b=h/10;
	h=h-10*b;
	c=h/5;
	h=h-5*c;
	d=h;
	printf("%d %d %d %d",a,b,c,d);*/
		/*remaining=remaining-payment+payment*rate;
	printf("%f",remaining);
	remaining=remaining-payment+payment*rate;
	printf("%f",remaining);
	
	
	int remaining=0;
	int loan=0;
	int rate=0;
	int payment=0;
	scanf("%d%d%d",&loan,&rate,&payment);
	remaining=(loan-payment)+(loan-payment)*rate/1200;
	printf("%d\n",remaining);
	remaining=(remaining-payment)+remaining*rate/1200;
	printf("%d\n",remaining);
	remaining=(remaining-payment)+remaining*rate/1200;
	printf("%d\n",remaining);
	
	
	float a=6.0f;
	printf("%.2f",a);
	printf("\a");
	
	int a=1;
	int b=2;
	int c=3;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d %d %d",a,b,c);
	
	int i,j;
	float x,y;
	scanf("%d%d%f%f",&i,&j,&x,&y);
	printf("%d %d %f %f",i,j,x,y);
	return 0;
	
	
	//分数相加
	int num1,denom1,num2,denom2,result_num,result_denom;
	printf("Enter first fraction:") ;
	scanf("%d/%d",&num1,&denom1);
	printf("Enter second fraction:") ;
	scanf("%d/%d",&num2,&denom2);
	result_num=num1 * denom2+num2 * denom1;
	result_denom=denom1*denom2;
	printf("The sum is %d/%d\n",result_num,result_denom);
	
	
	printf("%6d,%4d\n",86,1040);
	printf("%12.5e\n",30.253);
	printf("%.4f\n",83.162);
	printf("%-6.2g",.0000009979);
	
	
	int a=1;
	int b=0;
	int c=0;
	scanf("%d -%d -%d",&a,&b,&c);
	printf("%d %d %d",a,b,c);
	
	
	int i;
	float x;
	int j;
	scanf("%d%f%d",&i,&x,&j);
	printf("%d %f %d",i,x,j);
	
	
	int num1,denom1,num2,denom2,result_num,result_denom;
	printf("Enter first fraction:") ;
	scanf("%d/%d",&num1,&denom1);
	printf("Enter second fraction:") ;
	scanf("%d/%d",&num2,&denom2);
	result_num=num1 * denom2+num2 * denom1;
	result_denom=denom1*denom2;
	printf("The sum is %d/%d\n",result_num,result_denom);
	
	int date,month,year;
	printf("please enter the date");
	scanf("%d/%d/%d",&date,&month,&year);
	printf("%d%d%d",year,month,date);
	
	int number=0;
	float price=0.0f;
	int a,b,c;
	printf("enter item number:\n");
	printf("enter unit price :\n");
	printf("enter pyrchase date(mm/dd/yyyy):\n");
	scanf("%d%f%d%d%d",&number,&price,&a,&b,&c);
	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t%f\t%d/%d/%d\n",number,price,a,b,c);
	*
	
	int a,b, c;
	printf("Enter phone number[(xxx)xxx-xxxx]:");
	scanf("(%d)%d-%d",&a,&b,&c);
	printf("you entered %d.%d.%d",a,b,c);

	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	int r=0;
	printf("Enter the numbers from 1 to 16 in any order:");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
	printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
	r=a+b+c+d;
	printf("row sums:%d",r);
	r=e+f+g+h;
	printf("row sums:%d",r);
	r=i+j+k+l;
	printf("row sums:%d",r);
	r=m+n+o+p;
	printf("row sums:%d",r);
	
	
	int a=0; 
	int b=0;
	int c=0;
	printf("please enter a number between 0 and 32763:");
	scanf("%d",&a);
	b=a%10;
	c=(a-b)/10;
	printf("The reversal is:%d%d",b,c);
	
	
	int n=0;
	printf("please enter a number:");
	scanf("%d",&n);
	while(n)
	{
		printf("%d",n%10);
		n /=10;
	}
	
	
	int i=1;
	for(i=1; i<=10; i++)
	{
		printf("%d",i);
	}
	
	
	int i=0;
	int sum=0;
	for(i=1;i<=100;i++)
	{
		if(i%3==0)
		sum+=i;
	}
	printf("%d\n",sum);
	
	
	int i=1;
	do
	{
		printf("%d",i);
		i=i+1;
	}while(i<=10);
	
	
	int i=1;
	while(i<=10)
	{
		if(i==5)
		break;
		printf("%d",i);
		i=i+1;
	}
	
	
	int i=1;
	while(i<=10)
	{
		if(i==5)
		continue;
		printf("%d",i);
		i=i+1;
	}
	
	
	int i=0;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		continue;
		printf("%d",i);
	}
	
	
	int a,b,c,d,max;
	printf("请输入4个整数:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	if(d>max)
	max=d;
	printf("最大的整数是：%d",max);
	
	
	int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,first_sum,second_sum,total;
	printf("enter the first (single) digit:");
	scanf("%d",&d);
	printf("enter first group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
	printf("enter second group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);
	first_sum=d+i2+i4+j1+j3+j5;
	second_sum=i1+i3+i5+j2+j4;
	total=3*first_sum+second_sum;
	printf("check digit:%d\n",9-((total-1)%10));
	
	
	int i=1;
	int a=0;
	a=i--;
	printf("%d\n%d",i,a);
	
	int i=1;
	printf("%d\n",i--);
	printf("%d",i);
	
	int a=5;
	int c=0;
	int b=0;
	c=(b=a+2)-(a=1);
	printf("%d",c);
	
	
	int i=2;
	int j=0;
	j=i*i++;
	printf("%d",j);
	
	
	int i=1;
	++i;
	printf("%d",i);
	
	
	int a,b,c,d,e,f;
	printf("please enter first date (mm/dd/yy):");
	scanf("%d/%d/%d",&a,&b,&c);
	printf("please enter second date (mm/dd/yy):");
	scanf("%d/%d/%d",&d,&e,&f);
	if(c<f)
	printf("%d/%d/%d is earlier than %d/%d/%d\n",a,b,c,d,e,f);

	else if(c=f){
		if(b<e)
		printf("%d/%d/%d is earlier than %d/%d/%d\n",a,b,c,d,e,f);
		else
		printf("%d/%d/%d is earlier than %d/%d/%d\n",d,e,f,a,b,c);
		}
	else
	printf("%d/%d/%d is earlier than %d/%d/%d\n",d,e,f,a,b,c);
	*/

	return 0;
}

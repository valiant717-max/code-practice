#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) {
/*	int n=0;
	scanf("%d",&n);
	int i=0;
	int a=0;
	for(a=0;a<n;a++)
	{
	for(i=0;i<=a;i++)
	{
		printf("*");
	}
	printf("\n");
	}
	int b=0;
	int c=0;
	for(b=n-1;b>=0;b--)
	{
		for(c=1;c<=b;c++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
/*	int i=0;
	scanf("%d",&i);
	for(i;i>0;i=i/10)
	{
		int a=0;
		a=i%10;
		printf("%d",a);
	}
	
	
	int i=0;
	scanf("%d",&i);
	printf("0%o",i);
	*/
	int main(int argc, char *argv[]) {
/*	int count=0;
	int n=0;
	scanf("%d",&n); 
	int step=1;
	int i=0;
	int j=0;
	for(i=0;i<n*2+1;i++)
	{
		count+=step;
		for(j=0;j<count;++j)
		{printf("*");}
		printf("\n");
		if(count==n)
		step=-1;
	}
*/
	
/*	int n=0;
	scanf("%d",&n);
	int i=0;
	int c=0;
	int a=1;
	c=n;
	for(c=n-1;c>0;c--)
	{
	for(i=1;i<=c;i++)
	{
	printf(" ");
	}
	int b=1;
	for(b=2*a-1;b>0;b--)
	{
		printf("*");
	}
	printf("\n");
	a+=1;
}*/
	
	
/*void method1(){
    int n;
    scanf("%d",&n);
    int i=0;
    for(i=1;i<=n;i++)
	{
    	int j=0;
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }

}
	
void method2(){
    int n;
    scanf("%d",&n);
    int i=0;
    for(i=1;i<=n;++i){
    	int j=0;
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    for(i=(n-1);i>=1;--i){
    	int j=0;
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
}



	void method3(){
    int n;
    scanf("%d",&n);
    int i=0;
    for(i=1;i<=n;++i){
    	int j=0;
        for(j=1;j<=n-i;++j)
        printf(" ");
        int k=0;
        for(k=1;k<=2*i-1;++k)
        printf("*");
        printf("\n");
    }
}

void method4(){
    int n;
    scanf("%d",&n);
    int i=0;
    for(i=1;i<=n;++i){
    	int j=0;
        for(j=1;j<=n-i;++j)
        printf(" ");
        int k=0;
        for(k=1;k<=2*i-1;++k)
        printf("*");
        printf("\n");
    }
    for(i=n-1;i>=1;--i){
    	int j=0;
        for(j=1;j<=n-i;++j)
        printf(" ");
        int k=0;
        for(k=1;k<=2*i-1;++k)
        printf("*");
        printf("\n");
    }
}


void printfMenu(){
printf("1 半斜三角形\n");
printf("2 全斜三角形\n");
printf("3 半正三角形\n");
printf("4 全正三角形\n");
printf("请输入你的选项\n");
	
}


int getChoice()
{int i=1;
printf("请输入你的选项：");
scanf("%d",&i);
while(i<0||i>4)
{
	printf("输入错误，请输入你的选项：");
	scanf("%d",&i);
}	
return i;
}

int main(int argc, char *argv[]) {
getChoice();
while(i!=0){
printfMenu();
scanf("%d",&i);
while(i<0||i>4)
{
	printf("输入错误，请输入你的选项：");
	scanf("%d",&i);
}
switch(i){
	case 1:
	method1();
	break;
	case 2:
	method2();
	break;
	case 3:
	method3();
	break;
	case 4:
	method4();
	break;
	case 0:
	printf("bye");
}
}*/


/*	int n;
	scanf("%d",&n);
	int f1=1;
	int f2=1;
	int f=0;
	int i=0;
	printf("1 1 ");
	for(i=3;i<=n;i++)
	{	f=f1+f2;
		printf("%d",f);
		f1=f2;
		f2=f;
	}*/
	
//	int main(int argc, char *argv[]) {
/*	int n;
	scanf("%d",&n);
	int f1=1;
	int f2=1;
	int f=0;
	int i=0;
	printf("1 1 ");
	for(i=3;i<=n;i++)
	{	f=f1+f2;
		printf("%d ",f);
		f1=f2;
		f2=f;
	}*/
	
	/*float e=1.0;
	int fac=1;
	float temp=0;
	int count =1;
	do
	{	temp=1.0/fac;
		e=e+temp;
		count=2;
		fac=fac*2;
	}while(temp>0.001);
	printf("e=%.3f\n",e);
	
	
	int n=10;
	float e=1.0;
	float temp=1;
	int i=1;
	for(i=1;i<=n;i++)
	{
	temp=temp*i;
	e+=1.0/temp;
	}
	printf("e=%f\n",e);

	int count=1;
	int step=1;
	int i=0;
	while(count!=0)
	{
	for(int j=1;j<=count;j++)
	printf("*");
	printf("\n");
	count+=step;
	if(count==n)
	step=-1; 
	}
	
	int n=0;
	int i=0;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{	
		int a=0;
		scanf("%d",&a);
		int j=0;
		for(j=a;j>0;j--)
		{
		int c=0;
		for(c=0;c<a-j;c++)
		printf(" ");
		int b=0;
		for(b=0;b<2*j-1;b++)
		printf("*");
        printf("\n");
		}
}

	int n=0;
	int i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	char ch;
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	printf("letter");
	else
	 if(ch>='0'&&ch<='9')
	printf("number");
	else
	printf("else");
	printf("\n");
	
	int i=0;
	int n=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	int a=0;
		int b=0;
		scanf("%d %d",&a,&b);
		int c=0;
		int d=0;
		int j=0;
		float f=0;
		c=a<b?a:b;
		d=a>b?a:b;
		for(j=c;j<=d;j++)
		{
		f=f+1.0/j;	
		}
		printf("%.3f",f);
		printf("\n");
	}*/
	
/*	int i=0;
	int j=0;
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
	int a,b;
	scanf("%d %d",&a,&b);
	int m=0;
	for(int c=a;c<=b;c++)
	{
	int n=1;
	int tmp=c;
	while(tmp/10)
	{
		n++;
		tmp/=10;
	}
	tmp=c;
	int sum=0;
	while(tmp)
	{
		sum+=(int)pow(tmp%10,n);
		tmp/=10;
	}
	if(sum==c)
	{
	printf("%d ",c);
	m=m+1;
	}
	}
	if(m==0)
	printf("-1");
	printf("\n");
	}
	
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	int sum=0;
		int a=0;
		scanf("%d",&a);
		while(a)
		{
			if(a%2!=0)
			{
				sum++;
			}
			a/=2;
		}
		printf("%d\n",sum);
	}
	*/
	
	
/*	int n=0;
	int i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	char ch;
	scanf("%c",&ch);
	if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
	printf("letter\n");
	else if(ch>=48&&ch<=57)
	printf("number\n");
	else 
	printf("else");
}*/

	
/*	float e=1.0;
	float temp=1;
	int i=1;
	do
	{
	temp=temp*i;
	e+=1.0/temp;
	i++;
	}while((1.0/temp)>0.001);
	printf("e=%f\n",e);*/
	
	 int n;
    scanf("%d",&n);
    int i=0;
    for(i=n;i>0;i--){
    	int j=0;
        for(j=1;j<=n-i;++j)
        printf(" ");
        int k=1;
        for(k=1;k<=i*2-1;k++)
        printf("*");
        printf("\n");
    }
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) {
/*	int x=10;
    int y=20;
    int z=30;
    if(x>y&&x>z)
    printf("%d",x);
    if(y>x&&y>z)
    printf("%d",y);
    if(z>x&&z>y)
    printf("%d",z);
    
    int x=10;
    int y=20;
    int z=30;
    int max=x;
    if (max<y)
    max=y;
    if (max<z)
    max=z;
    printf("the max value is:%d",max);
    
    
    int year;
    scanf("%d",&year);
    if(year%400==0)
	printf("%d is a leap year\n",year);
	else{
		if((year%4==0)&&(year%100!=0))
		printf("%d is a leap year\n",year);
		else
		printf("%d is not a leap year\n",year);
	}
	
	
	int year;
    scanf("%d",&year);
    if((year%400==0)||(year%4==0)&&(year%100!=0))
    printf("%d is a leap year\n",year);
    else
    printf("%d is not a leap year\n",year);
    
    
    int score;
    scanf("%d",&score);
    if (score>=90)
    printf("a");
    else if(score>=80)
    printf("b");
    else if(score>=70)
    printf("c");
    else
    printf("d");
    
    int score;
    scanf("%d",&score);
    int temp=0;
    if (score>=90)
    temp=0;
    else 
	temp=9-score%10;
    printf("%c",temp+'A');
    
    


int getmaxvalue() {
    int x = 10;
    int y = 20;
    int z = 30;
    int max = x;  // 假设x是最大值

    if (y > max) {
        max = y;  // 如果y大于max, 则更新max
    }
    if (z > max) {
        max = z;  // 如果z大于max, 则更新max
    }

    return max;  // 返回最大值
}

int main(int argc, char *argv[]) {
 
    int maxValue = getmaxvalue();  // 获取最大值
    printf("max=%d\n", maxValue);  // 打印最大值

	return 0;
	}*/
	//int main(int argc, char *argv[]) {
	/*int a=10;
	printf("%zd\n",sizeof(a));
	printf("%zd\n",sizeof(int))	;
	printf("%zd\n",sizeof(3+4));
	
	
	short s=2;
	int b=10;
	printf("%zd\n",sizeof(s=b+1));
	printf("%d\n",s);	
	
	
	printf("%5d\n",123);
	printf("%.2f\n",123.0);
	printf("%*.*f\n",6,2,123.0);
	printf("%.7s\n","hello world");
	
	
	int score=0;
	printf("请输入成绩:");
	scanf("%d",&score);
	printf("成绩是%d",score) ;
	
	
	int a=0;
	int b=0;
	float c=0.0;
	int r=scanf("%d%d%f",&a,&b,&c);
	printf("a=%d b=%d c=%f",a,b,c);
	printf("r=%d",r);
	
	
	int age=0;
	scanf("%d",&age);
	if (age>=18)
	printf("成年");
	else
	printf("未成年");
	
	
	
	int num=0;
	scanf("%d",&num);
	if (num>0){
		if(num%2==0)
		printf("%d是偶数",num);
		else
		printf("%d是奇数",num);
	}
	else
	printf("%d是负数",num); 
	
	
	int year=0;
	scanf("%d",&year);
	if((year%400==0)||(year%4==0)&&(year%100!=0))
	printf("%d is a leap year",year);
	else
	printf("%d is not a leap year",year);
	
	
	int i=0,a=0,b=2,c=3,d=4;
	i=a++&&++b&&d++;
	printf("i=%d a=%d b=%d c=%d d=%d",i,a,b,c,d);
	
	
	int n=0;
	scanf("%d",&n);
	switch(n%3)
	{
		case 0:
			printf("整数，余数是0");
			break;
		case 1:
			printf("整数，余数是1");
			break;
		case 2:
			printf("整数，余数是2");
			break;
		default:
			printf("不是整数");
			break;	
			
			
	int i=1;
	while(i<10)
	{
		printf("%d",i);
		i=i+1;
	}
	
	
	int n=0;
	scanf("%d",&n);
	while(n)
	{
		printf("%d",n%10);
		n=n/10;
	}
	
	
	int i=0;
	for(i=1;i<=10;i++)
	printf("%d",i);
	
	
	int i=0;
	for(i=1234;i!=0;i=i/10)
	printf("%d",i%10);
	
	
	int i=0;
	int sum=0;
	for(i=3;i<=100;i=i+3){
		sum=sum+i;
	}
	printf("%d",sum);
	
	
	int i=1;
	do
	{
		printf("%d",i);
		i=i+1;
	}
	while(i<=10);
	
	
	int n=0;
	int cnt=0;
	scanf("%d",&n);
	do{
		cnt++;
		n=n/10;
	}
	 while(n);
	 printf("%d",cnt);
	 
	 
	int i=0;
	for(i=1;i<=100;i++) 
	{
		int j=0;
		int flag=1;
		for(j=2;j<=i-1;j=j+1)
		{
		
		if(i%j==0)
		flag=0;
		break;
		}
	
	if(flag==1)
	printf("%d",i);
	}
	int main(int argc, char *argv[]) {
	int i=0;
	for(i=1;i<=100;i++) 
	{
		int j=0;
		int flag=1;
		for(j=2;j<=i-1;j=j+1)
		{
		
		if(i%j==0)
		flag=0;
		break;
		}
	
	if(flag==1)
	printf("%d",i);
	}*/
	
	return 0;
	}

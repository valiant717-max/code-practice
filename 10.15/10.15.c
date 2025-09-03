#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) {
		
/*	int i,a,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a<=1000&&a>=99)
		{
		printf("%d,",a%10);
		a/=10;
		printf("%d,",a%10);
		a/=10;
		printf("%d\n",a%10);
		}
		else
		printf("illegal\n");
		}
		
		int arr[10]={1,2,3,4,5,6,7,8,9,10};
		int i=0;
		for(i=0;i<10;i++)
		printf("&arr[%d]=%p\n ",i,&arr[i]);
		
		
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",sizeof(arr[2]));
	int sz=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sz);
	
	
	int arr[3][5]={1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
	int i=0;
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<5;j++)
		{scanf("%d",&arr[i][j]);}
	}
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<5;j++)
		{printf("%d",arr[i][j]);}
		printf("\n");
	}
	
	int n=0;
	scanf("%d\n",&n);
	int arr[n];
	int i=0;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	
	
	char arr1[]="hello world";
	char arr2[]="###########";
	int left=0;
	int right=strlen(arr1)-1;
	printf("%s\n",arr2);
	while(left<=right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	
	int arr[]={1,2,3,4,5,6,7,8,9} ;
	int left=0;
	int mid=0;
	int right=sizeof(arr)/sizeof(arr[0])-1;
	int key=5;
	int find=0;
	while(left<=right)
	{
 	mid=(left+right)/2;
	if(arr[mid]<key)
	left=mid+1;
	else if(arr[mid]>key)
	right=mid-1;
	else
	{
	find=1;
	break;
	}
	}
	if(find==0)
	printf("sorry");
	else if(find==1)
	printf("找到了，下标是%d\n",mid);
	int Add(int x,int y)
	{
		return x+y;
	}
	int is_leap_year(int year)
	{
		if(year%400==0||(year%4==0&&year%100!=0))
		return 1;
		else
		return 0;
	}
	
	int get_days_of_month(int y,int m){
		int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		int day=days[m];
		if (is_leap_year(y)&&m==2)
		day++;
		return day;
	}*/
	
int main() {
/*	int a=0;
	int b=0;
	scanf("%d %d",&a,&b);
	int r=Add(a,b);
	printf("%d\n",r);
	
	
	int y=0;
	int m=0;
	int d=0;
	scanf("%d%d",&y,&m);
	d=get_days_of_month(y,m);
	printf("%d",d);
	
	
	printf("%d",printf("%d ",printf("%d ",43)));
	
	bool is_leap_year(int y)
	{
		if(((y%4==0)&&(y%100!=0))||(y%400==0))
		return true;
		else
		return false;
	}
	
int is_leap_year(int y)
	{
		if(((y%4==0)&&(y%100!=0))||(y%400==0))
		return 1;
		else
		return 0;
		}
	int is_leap_year(int y);	
	int year=0;
	scanf("%d",&year);
	if (is_leap_year(year))
	printf("%d is a leap year\n",year);
	else
	printf("%d is not a leap year\n",year);*/
int a = 0;
for (a = 101; a <= 200; a+=2)
{	int b = 0;
int flag = 1;
	for (b = 2; b < a; b++)
	{
		if (a % b == 0)
		{
			flag = 0;
			break;
		}

	}
	if (flag == 1)
		printf("%d ", a);
}
	return 0;
}

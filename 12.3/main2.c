#include <stdio.h>
#include <stdlib.h>
/* 以int (*p)[3];为例，p是一个指向包含3个int元素的数组的指针,
当你进行*p操作时，从逻辑上来说，它返回的是p所指向的数组。 
但由于C语言的类型系统，返回的这个“数组”在表达式中的类型仍然保持为“指向包含3个int类型元素的数组的指针”
这是因为C语言在处理数组时，除了少数情况（如在数组初始化、作为sizeof操作数等）
数组名在表达式中会自动转换为指向其第一个元素的指针。
对于这种数组指针的解引用结果，也是类似的处理方式，它保持了指针的特性，方便进行后续的操作，比如通过这个指针再去访问数组中的元素。
*/void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void printArray1(int *p,int n){
	for(int i=0;i<n;i++)
	{
		printf("%d\n",p[i]);
	}
}
void method1()
{
	int x=10;
	int *p;
	p=&x;
	printf("%d\n",p);
	char *p1;
	p1=(char*)&x;
	for(int i=0;i<4;i++)
	{
	printf("%d\n",p1+i);
	}
	for(int i=0;i<4;i++)
	{
		printf("%d\n",p1[i]);
	}
}
void method2()
{
	int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int* p=arr[0];
	//p=arr;p=arr[0],arr[0]的类型是int *,和&arr[0][0]一样 
/*	for(int i=0;i<12;i++)
	{
	printf("%d ",*(p+i));
	}
	printf("\n");
	for(int i=0;i<12;i++)
	{
	printf("%5d",p[i]);
	if(i%4==3)printf("\n");
	}
	printf("%d\n",arr);
	printf("%d\n",arr[0]);
	printf("%d\n",&arr[0][0]);*/
	int (*p1)[4];
	p1=&arr;//p1是一个指向二维数组的数组指针 ,指向二维数组的第一行 
	int *p2[4];//指针数组 
	printf("%d\n",p1);//打印首元素的地址 
	printf("%d\n",p+1);//打印第二个元素的地址 
	printf("%d\n",p1+1);//arr是二维数组，p1+1表示跳过第一行 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++){
			printf("%5d",*(p+i*4+j));//打印整个数组的元素 
		}
		printf("\n");
	}
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++){
			printf("%5d",*(*(p1+i)+j));
//（p1+i解引用得到第i行首元素的地址，再加j得这一行的第j个元素的地址 
		}
		printf("\n");
	}
	printf("%d\n",arr+0);//address--{1,2,3,4}
	printf("%d\n",arr+1);//address--&arr[1] {5,6,7,8}
	printf("%d\n",*(arr+2));//address--arr[2]===&arr[2][0] 9 in {9,10,11,12}
	printf("%d\n",*(*(arr+2)));//data--arr[2][0] 9 in {9,10,11,12}
}
void method3(){
/* 	int *p;
	*p=10;*///不可行
	char*p1;
	p1="abcde";//把字符串的地址给p1,不写* 
	char arr[4]="abc";
	arr[3]='d';
	printf("%s",arr);
} 
int main(int argc, char *argv[])
{
/*int arr[10]={0};
for(int i=0;i<10;++i)
{
	arr[i]=i;
}
int *p;
p=&arr[0];
for(int i=0;i<10;i++)
{
	printf("%d ",*(p+i));
	printf("%d ",p[i]);
}*/
method2();
	return 0;
}

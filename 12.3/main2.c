#include <stdio.h>
#include <stdlib.h>
/* ��int (*p)[3];Ϊ����p��һ��ָ�����3��intԪ�ص������ָ��,
�������*p����ʱ�����߼�����˵�������ص���p��ָ������顣 
������C���Ե�����ϵͳ�����ص���������顱�ڱ��ʽ�е�������Ȼ����Ϊ��ָ�����3��int����Ԫ�ص������ָ�롱
������ΪC�����ڴ�������ʱ������������������������ʼ������Ϊsizeof�������ȣ�
�������ڱ��ʽ�л��Զ�ת��Ϊָ�����һ��Ԫ�ص�ָ�롣
������������ָ��Ľ����ý����Ҳ�����ƵĴ���ʽ����������ָ������ԣ�������к����Ĳ���������ͨ�����ָ����ȥ���������е�Ԫ�ء�
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
	//p=arr;p=arr[0],arr[0]��������int *,��&arr[0][0]һ�� 
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
	p1=&arr;//p1��һ��ָ���ά���������ָ�� ,ָ���ά����ĵ�һ�� 
	int *p2[4];//ָ������ 
	printf("%d\n",p1);//��ӡ��Ԫ�صĵ�ַ 
	printf("%d\n",p+1);//��ӡ�ڶ���Ԫ�صĵ�ַ 
	printf("%d\n",p1+1);//arr�Ƕ�ά���飬p1+1��ʾ������һ�� 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++){
			printf("%5d",*(p+i*4+j));//��ӡ���������Ԫ�� 
		}
		printf("\n");
	}
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++){
			printf("%5d",*(*(p1+i)+j));
//��p1+i�����õõ���i����Ԫ�صĵ�ַ���ټ�j����һ�еĵ�j��Ԫ�صĵ�ַ 
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
	*p=10;*///������
	char*p1;
	p1="abcde";//���ַ����ĵ�ַ��p1,��д* 
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

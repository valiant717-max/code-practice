#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <ctype.h>
int add(int x,int y)
{
	return x+y;
}
int calculate(int x,int y, int(*p)(int,int)){
	return(*p)(x,y);
}

void function1(){
int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
printf("%d\n",arr[0]);//&arr[0][0] 
printf("%d\n",arr[0]+1);//&arr[0][1] 
printf("%d\n",*arr[0]);//arr[0][0]
printf("%d\n",*arr[0]+1);//arr[0][0]+1
printf("%d\n",*(arr[0]+1));//arr[0][1] 
printf("%d\n",arr);//第0行的地址 
printf("%d\n",arr+1);//第1行的地址 
printf("%d\n",*arr[0]);//arr[0][0]
printf("%d\n",*arr+1);//第0行第二个元素的地址
//二维数组第一行的地址解引用得到第一行第一个元素的地址 
printf("%d\n",*(arr+1));//第1行第0个元素的地址 
printf("%d\n",*(arr+1)+1);//第1行第1个元素的地址
}
void method1(int a){
	a=100;
}
/*printf("%#x\n",main);
int x;
x=main//int()
void (*p1)(int x);
p1=method1;
(*p1)(10);//method(10)
int result=0;
result=calculate(20,10,add);
result=calculate(20,10,minus);
int (*p)(int,int);
int (*p1[4])(int,int);
p1[0]=add;
p1[1]=minus;*/
int main() {
/*	void *p;
	p=malloc(10);
	printf("%#x\n",p);*/
	int *p;
	p=(int*)malloc*(40);
	for(int i=0;i<10;++i){
		p[i]=i;
		*(p+i)=i;
	}
	char *p1;
	pi=char *p;
	pi[1]='a';
    return 0;
}

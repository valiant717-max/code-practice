#include<stdio.h>
#include<string.h>
#include<string.h>
//虽然字符串也存在字符数组中，但可以用字符指针接收 
int findString(char (*p1)[100],char *p2,int n) {
	int times=0;
	for(int i=0;i<n;i++){
	if(strcmp(p1[i],p2)==0){
		times++;
	}
}
	return times;
}
int main() {
	int n=0;
	scanf("%d",&n);
	getchar();//important
	char str[10][100];
	char str2[100];
	for(int i=0;i<n;i++){
		fgets(str[i],100,stdin);//利用fgets函数的特点，将'\n'自动转化为'\0'作为字符串结束的标志 
	}
	fgets(str2,100,stdin);
	int times=findString(str,str2,n);
	printf("%d",times); 
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<string.h>
//��Ȼ�ַ���Ҳ�����ַ������У����������ַ�ָ����� 
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
		fgets(str[i],100,stdin);//����fgets�������ص㣬��'\n'�Զ�ת��Ϊ'\0'��Ϊ�ַ��������ı�־ 
	}
	fgets(str2,100,stdin);
	int times=findString(str,str2,n);
	printf("%d",times); 
	return 0;
}

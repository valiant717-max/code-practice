#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//3��strlen������ģ��ʵ�ַ�ʽ 
int my_strlen1(const char *str){
	int count=0;
	while(*str!='\0'){
		str++;
		count++;
	}
	return count;
}
int my_strlen2(const char *str){
	char *start=str;
	while(*str!=0){
		str++;
	}
	return str-start;
}
int my_strlen3(const char *str){
	if(*str==0)
	return 0;
	else
	return 1+my_strlen3(str+1);
}


//strcpy������ģ��ʵ��,�ַ�������
//strcpy���ص���Ŀ��ռ����ʼ��ַ 
char* my_strcpy(char *dest,const char *src){
	char *ret = dest;  
	while(*src!='\0'){
		*dest++=*src++;
	}
	*dest=*src;//'\0'
	return ret; 
}

//strcat������ģ��ʵ�֣��ַ������� 
char *my_strcat(char *dest,const char*src){
	char *ret=*dest;
	while(*dest){//��\0��������\0 
		dest++;
	}
	while(*dest++=*src++){//��\0�����ҿ���\0 ��Ϊ�ַ��������ı�־ 
		;
	}
	return ret;
}
int main(int argc, char *argv[]) {
/*��ʹ��%s��Ϊprintf�����ĸ�ʽ�����Ʒ�ʱ������������Ĳ�����һ��ָ���ַ����׵�ַ��ָ�롣����������ָ����ָ���λ�ÿ�ʼ�����ζ�ȡ�ַ���
ֱ�������ַ���������־'\0'Ϊֹ��������Щ�ַ������ʾ����չʾ�����ַ������ݡ�*/
char str[]="This is a simple string";
char * pch;
pch=strstr(str,"simple");
strncpy(pch,"sample",6);
printf("%s\n",pch);
	return 0;
}

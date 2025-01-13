#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//3种strlen函数的模拟实现方式 
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


//strcpy函数的模拟实现,字符串拷贝
//strcpy返回的是目标空间的起始地址 
char* my_strcpy(char *dest,const char *src){
	char *ret = dest;  
	while(*src!='\0'){
		*dest++=*src++;
	}
	*dest=*src;//'\0'
	return ret; 
}

//strcat函数的模拟实现，字符串连接 
char *my_strcat(char *dest,const char*src){
	char *ret=*dest;
	while(*dest){//找\0但不拷贝\0 
		dest++;
	}
	while(*dest++=*src++){//找\0但并且拷贝\0 作为字符串结束的标志 
		;
	}
	return ret;
}
int main(int argc, char *argv[]) {
/*当使用%s作为printf函数的格式化控制符时，它期望传入的参数是一个指向字符串首地址的指针。函数会从这个指针所指向的位置开始，依次读取字符，
直到遇到字符串结束标志'\0'为止，并将这些字符输出显示，以展示整个字符串内容。*/
char str[]="This is a simple string";
char * pch;
pch=strstr(str,"simple");
strncpy(pch,"sample",6);
printf("%s\n",pch);
	return 0;
}

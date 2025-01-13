#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int leng(char *start,char *index1,char *p){
	char *a=strstr(index1,p);
	if(a==NULL)return 0;
	else return a-start;
}
int main(int argc, char *argv[]) {
	char arr1[100];
	char arr2[100]; 
	gets(arr1);
	gets(arr2);
	int len2=strlen(arr1);
	int len=strlen(arr2);
	char *index=arr1;//记录每一段的起始地址 
	int length=leng(arr1,index,arr2);
	int i=0;
	while(index!=NULL){
		length=leng(arr1,index,arr2);
		if(length==0){
			while(index!=NULL){
				printf("%c",*index);
				index++;
			}
				return 0;
		}
		for(;i<length;i++){
			printf("%c",arr1[i]);
			index++;
		}
		printf("/*");
		for(;i<len+length;i++){
			printf("%c",arr1[i]);
			index++;
		}
		printf("*/");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
char str[100];
gets(str);
int len=strlen(str);
int k1=0;
int k2=0;
for(int i=0;i<len;i++){
	if((str[i]>='0'&&str[i]<='9')||(str[i]>'a'&&str[i]<'z')||(str[i]>'A'&&str[i]<'Z')||
	str[i]=='-'||str[i]=='_'||str[i]=='@'||str[i]=='.'){
		if(str[i]=='@'){
			if(i==0||i==len-1){
				printf("no");
				return 0;
			}
			k1++;
		}
		if(str[i]=='.'){
			if(str[i-1]=='@'||i==len-1){
				printf("no");
				return 0;
			}
			k2++;
		}
	}
	else{
		printf("no");
		return 0;
	}
}
if(k1!=1||k2!=1){
	printf("no");
	return 0;
}
printf("yes");
	return 0;
}

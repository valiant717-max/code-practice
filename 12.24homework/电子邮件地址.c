#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char str[100];
	gets(str);
	int len=strlen(str); 
	int count1=0;
	int count2=0;
	for(int i=0;i<len;i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')
		||str[i]=='_'||str[i]=='-'||str[i]=='@'||str[i]=='.')
		{
			if(str[0]=='@'||str[len-1]=='@'){
				printf("no");
				return 0;
			}
			if(str[i]=='.'&&str[i-1]=='@'){
				printf("no");
				return 0;
			}
			if(str[i]=='@')count1++;
			if(str[i]=='.')count2++;
		}
		else {
			printf("no");
			return 0;
		}
		if(str[len-1]=='.')
		{
		printf("no");
		return 0;
		}
		if(count1>1||count2>1){
			printf("no");
			return 0;
		}
	}
	printf("yes");
	return 0;
}

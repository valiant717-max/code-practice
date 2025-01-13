#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char str[100];
	gets(str);
	int len=strlen(str);
	int count=1;
	for(int i=0;i<len;i++){
		if(str[i]==' '){
			count++;
			while(str[i+1]==' '){
				i++;
			}
		}
	}
	printf("%d",count);
	return 0;
}

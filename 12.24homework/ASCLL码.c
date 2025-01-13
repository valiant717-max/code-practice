#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		char str[100];
		int arr[100];
		gets(str);
		int len=strlen(str);
		for(int i=0;i<len;i++){
			int sum=0;
			if(str[i]>='0'&&str[i]<='9'){
				arr[i]=str[i]-'0';
			}
			else if(str[i]>='A'&&str[i]<='Z'){
				arr[i]=str[i]-'A'+11;
			}
			i++;
				if(str[i]>='0'&&str[i]<='9'){
				arr[i]=str[i]-'0';
			}
			else if(str[i]>='A'&&str[i]<='Z'){
				arr[i]=str[i]-'A'+10;
			}
			sum=arr[i-1]*16+arr[i];
			printf("%c",sum);
		}
		printf("\n");
	} 
	return 0;
}

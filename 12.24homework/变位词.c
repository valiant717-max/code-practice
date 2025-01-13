#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char str1[20];
	char str2[20];
	scanf("%s",str1);
	scanf("%s",str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
	str1[len1]='\0';
	str2[len2]='\0';
	int count=0;
	if(len1==len2){
		int count2=0;
		for(int i=0;i<len2;i++){
			if(str1[i]==str2[i]){
				count2++;
			}
		}
		if(count2==len2){
			printf("No");
			return 0;
		}
		for(int i=0;i<len1;i++){
			for(int j=0;j<len2;j++){
				if(str2[j]==str1[i]){
					str2[j]='.';
					count++;
					break;
				}
			}
		}
		if(count==len1)printf("Yes");
		else printf("No"); 
	}
	else{
		printf("No");
		return 0;
	}
	return 0;
}

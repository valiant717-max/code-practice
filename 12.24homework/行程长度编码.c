#include <stdio.h>
#include <string.h>
int main() {
char str[101];
scanf("%s",str);
int len=strlen(str);
int j=0;
while(j<len){
int i=j;
int count=0;
while(str[i]==str[j]||(str[i]-32==str[j])||(str[i]+32==str[j]))
{
	i++;
	count++;
}
printf("(");
if(str[i-1]<=122&&str[i-1]>=97)
{
	printf("%c",str[i-1]-32);
}
else printf("%c",str[i-1]);
printf("-%d)",count);
j=i;
}
    return 0;
}


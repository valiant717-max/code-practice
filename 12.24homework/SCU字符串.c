#include <stdio.h>
#include <string.h>
int main() {
int n=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
char str[200];
scanf("%s",str);
int len=strlen(str);
int j=1;
if(len%2==0)j=0;
if(len%2==1)
{
	if((str[len/2-1]=='S')&&(str[len/2]=='C')&&(str[len/2+1]=='U'))
	j=1;
	else j=0;
	for(int i=0;i<len/2-1;i++)
	{
		if(str[i]!='A')j=0;
	}
	for(int i=len/2+2;i<len;i++)
	{
		if(str[i]!='A')j=0;
	}
}
if(j==0)printf("NO\n");
else printf("YES\n");
}
    return 0;
}


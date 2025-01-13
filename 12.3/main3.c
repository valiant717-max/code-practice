#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
char str[100];
while(scanf("%s",str)!=0)
{
	int len=strlen(str);
	int j=0;
	for(int i=0;i<len;i++)
{
	if(((str[i]<64&&str[i]!=46&&str[i]!=45&&str[i])||(str[i]>90&&str[i]<97&&str[i]!=95)
	||(str[i]>122))&&(str[i]<'0'||str[i]>'9'))
	j=1;
	else if(str[0]=='@'||str[len-1]=='@')
	j=1;
	int count=0;
	for(int m=0;m<len;m++)
	{
		if(str[i]=='.')count++;
	}
	if(count>=1)j=1;
	int m=0;
	for(m=0;m<len;m++)
	{
		if(str[m]=='@')
		break;
	}
	if((str[m+1]=='.')||str[len-1]=='.')j=1;
}
if(j==1)printf("no");
else printf("yes");
} 
    return 0;
}

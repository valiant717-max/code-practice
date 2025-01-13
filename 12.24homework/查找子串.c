#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[]) {
char s1[100]={0};
char s2[100]={0};
char s3[100]={0};
scanf("%s",s1);
scanf("%s",s2);
char *pch1;
char *pch2;
pch1=strstr(s1,s2);
int len=strlen(s2);
for(int i=0;i<len;i++){
	s3[i]=s2[len-1-i];
}
pch2=strstr(s1,s3);
char *temp=pch2;
while(temp!=NULL){
	pch2=temp;
	temp=strstr(pch2+1,s3);
}
if(pch1==NULL||pch2==NULL||pch1-pch2>=0)printf("no");
else printf("%d",pch2-pch1-len);
	return 0;
}

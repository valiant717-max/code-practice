#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[]) {
	char str[100];
	int arr[1000];
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++){
		int temp=0;
		temp=(int)str[i];
		for(int j=1;j<=8;j++){
			arr[(i+1)*8-j]=temp%2;
			temp/=2;
		}
	}
		int panduan=(len*8)%6==0?(len*8)/6:(len*8)/6+1;
		for(int i=len*8;i<=panduan*6;i++){
			arr[i]=0;
		}
		for(int i=0;i<panduan;i++){
			int temp=0;
			for(int q=0;q<6;q++){
				temp+=arr[q+i*6]*pow(2,5-q);
			}
		if (temp<26)
		{
			printf("%c", temp + 65);
		}
		if (temp > 25 && temp < 52)
		{
			printf("%c", temp + 71);
		}
		if (temp > 51 && temp < 62)
		{
			printf("%c", temp - 4);
		}
		if (temp == 62)
		{
			printf("+");
		}
		if (temp == 63)
		{
			printf("/");
		}
}
		int sum =4*(panduan/4+1);
		for (int i=panduan; i<sum;i++)
		{
			printf("=");
		}
	printf("\n");
	return 0;
}

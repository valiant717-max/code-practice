#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char str[1000]={0};
	gets(str);
	int n=strlen(str);
	int left;
	int right;
	int max1=1;
	int max2=1;
	int count[1000]={1};
	 for (int i = 0; i < 1000; i++) {
        count[i] = 1;
    }
    if(n==1){
    	printf("1");
    	return 0;
	}
	if(n==2&str[0]==str[1]){
    	printf("2");
    	return 0;
	}
	for(int i=1;i<n-1;i++){
		left=i-1;
		right=i+1;
		while(str[left]==str[right]&&right<n&&left>=0){
			left--;
			right++;
			count[i]+=2;
		}
		if(count[i]>max1)max1=count[i];
	}
	int count2[1000]={0};
	for(int j=0;j<n-1;j++){
		if(str[j]==str[j+1]){
		count2[j]=2;
		left=j-1;
		right=j+2;
		while(str[left]==str[right]&&right<n&&left>=0){
			left--;
			right++;
			count2[j]+=2;
		}
	}
		if(count2[j]>max2)max2=count2[j];
	}
	if(max1>max2)printf("%d",max1);
	else printf("%d",max2);
	return 0;
} 

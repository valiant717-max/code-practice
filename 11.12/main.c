#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int a=0;
scanf("%d",&a);
int left=0;
int right=9;
int mid=0;
do{
mid=(left+right)/2;
if(arr[mid]>a)
right=mid-1;
if(arr[mid]<a)
left=mid+1;
if(arr[mid]=a)
break;
}while(right>=left);
printf("%d",mid);
	return 0;
}

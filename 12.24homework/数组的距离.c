#include <stdio.h>
#include <stdlib.h>
int main(){
	int a=0;
	scanf("%d",&a);
	int arr1[a];
	for(int j=0;j<a;j++)
	{
		scanf("%d",&arr1[j]);
	}
	int min=arr1[0];
	int max=arr1[0];
	for(int j=0;j<a;j++)
	{
		if(arr1[j]>max)
		max=arr1[j];
		if(arr1[j]<min)
		min=arr1[j];
	}
	int b=0;
	scanf("%d",&b);
	int arr2[b];
	for(int j=0;j<b;j++)
	{
		scanf("%d",&arr2[j]);
	}
	int min2=arr2[0];
	int max2=arr2[0];
	for(int j=0;j<b;j++)
	{
		if(arr2[j]>max2)
		max2=arr2[j];
		if(arr2[j]<min2)
		min2=arr2[j];
	}
	int m=0;
	if(max-min2>=0)
	m=max-min2;
	else
	m=min2-max;
	int m2=0;
	if(max2>min)
	m2=max2-min;
	else
	m2=min-max2;
	int h=0;
	h=m>m2?m:m2;
	printf("%d",h);
	return 0;
}

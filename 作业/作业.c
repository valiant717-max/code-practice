#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
int n=0;
int k=0;
scanf("%d",&n);
scanf("%d",&k);
printf("\n");
int arr1[n][n]=;
int arr2[n][n];
for(int i=0;i<3;++i)
{
	for(int j=0;j<3;j++)
	{
	arr1[i][j]=rand()%101;
	arr2[i][j]=rand()%101;
	}
}
for(int i=0;i<3;++i)
{
	for(int j=0;j<5;j++)
	{
	for(int k=0;k<4;k++)
	{
	arr3[i][j]+=arr1[i][k]*arr2[k][j];	
	}
	}
}

for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	printf("%5d",arr1[i][j]);
	if(1==i)printf("   *");
	else printf("    ");
	for(int j=0;j<3;j++)
	printf("%5d",arr2[i][j]);
	if(1==i)printf("   =");
	else printf("    ");
	for(int j=0;j<3;j++)
	printf("%6d",arr3[i][j]);
	puts("");

		return 0;
	}
	



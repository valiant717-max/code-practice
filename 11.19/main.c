#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	int arr[10]={3,4,5,6,7,8,9,10,1,2};
	for(int i=0;i<9;i++)
	{
		int min=i;
		int temp=0;
		for(int j=i+1;j<10;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=0;
		if(min!=i)
			{
				temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
			}
	
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
*/	

void f1(){
	int arr[6]={0};
	srand(time(NULL));
	for(int i=0;i<10000;i++)
	{
		arr[rand()%6]++;
	}
	for(int i=0;i<6;i++)
	{
		printf("%5d",arr[i]);
		for(int j=0;j<arr[i]/100.0+0.5;++j)
		printf("*");
		printf("\n");
	}
	}
	
void f2(){
int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
srand(time(NULL));
for(int i=0;i<3;i++)
{
	for(int j=0;j<4;j++)
	{
		arr[i][j]=rand()%10;
	}
}
for(int i=0;i<3;i++)
{
	for(int j=0;j<4;j++)
	printf("%-3d",arr[i][j]);
	printf("\n");
}
}


int score[10][6]={0};
srand(time(NULL));
for(int i=0;i<10;i++)
{	
	score[i][0]='a'+rand()%26;
	for(int j=1;j<6;j++)
	{
		score[i][j]=rand()%41+60;
	}
}
for(int i=0;i<10;i++)
{	
	printf("%c  ",score[i][0]);
	for(int j=1;j<6;j++)
	printf("%-5d",score[i][j]);
	printf("\n");
}
/*
printf("ave");
int sum=0;
int ave=0;
int max=0;
int min=100;
for(int j=1;j<6;j++)
{
sum=0;
for(int i=0;i<10;i++)
{
	sum+=arr[i][j];
	if(arr[i][j]>max)
	max=arr[i][j];
	if(arr[i][j]<min);
	min=arr[i][j];
}
ave=sum/10;
printf("%-5d",ave);
}
printf("\n");
printf("max");
for(int j=1;j<6;j++)
{
max=0;
for(int i=0;i<10;i++)
{
	if(arr[i][j]>max)
	max=arr[i][j];
}
printf("%-5d",max);
}
printf("\n");
printf("min");
for(int j=1;j<6;j++)
{
min=100;
for(int i=0;i<10;i++)
{
	if(arr[i][j]<min)
	min=arr[i][j];
}
printf("%-5d",min);
}
*/

int ave[3][5]={{0},{0},{100,100,100,100,100}};
for(int i=0;i<10;i++)
{
	printf("%c   ",score[i][0]);
	for(int j=1;j<6;++j)
	{
		printf("%-5d",score[i][j]);
		ave[0][j-1]+=score[i][j];
		if(ave[1][j-1]<score[i][j])
		ave[1][j-1]=score[i][j];
		if(ave[2][j-1]>score[i][j])
		ave[2][j-1]=score[i][j];
	}
	puts(""); 
}
printf("ave:");
for(int i=0;i<5;i++)
printf("%-5.1f",ave[0][i]/10.0);
printf("\n");
printf("max:");
for(int i=0;i<5;i++)
printf("%5d",ave[1][i]);


void f4(){
int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
int arr1[4][3]={0};
for(int i=0;i<4;i++)
{	
	int j;
	for(j=0;j<3;j++)
	{
	arr1[i][j]=arr[j][i];
	printf("%d ",arr1[i][j]);
	}
	printf("\n");
}
}

//矩阵加法 
void f5(){
int arr1[3][3];
int arr2[3][3];
int arr3[3][3];
srand(time(NULL));
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
	for(int j=0;j<3;j++)
	arr3[i][j]=arr1[i][j]+arr2[i][j];
}
for(int i=0;i<3;++i)
{
	for(int j=0;j<3;j++)
	{
	printf("%-5d",arr3[i][j]);
	}
	printf("\n");
}
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	printf("%5d",arr1[i][j]);
	if(1==i)printf("   +");
	else printf("    ");
	for(int j=0;j<3;j++)
	printf("%5d",arr2[i][j]);
	if(1==i)printf("   =");
	else printf("    ");
	for(int j=0;j<3;j++)
	printf("%5d",arr3[i][j]);
	puts("");
}
}

//相同形状矩阵乘法 
void f(){
int arr1[3][3];
int arr2[3][3];
int arr3[3][3]={0};
srand(time(NULL));
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
	for(int j=0;j<3;j++)
	{
	arr3[i][j]+=arr1[i][0]*arr2[0][j]+
				arr1[i][1]*arr2[1][j]+
				arr1[i][2]*arr2[2][j];
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
	printf("%5d",arr3[i][j]);
	puts("");
}
}

//矩阵乘法 
void f6(){
int arr1[3][4];
int arr2[4][5];
int arr3[3][5]={0};
srand(time(NULL));
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
}
}

//模糊处理 
void f7(){
void IntAarry2(int arr[][20], int row, int col) {
    srand(time(NULL));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand() % 256;
        }
    }
}
    int img2[20][20];
    IntAarry2(img2, 20, 20);
    for (int i = 1; i < 19; i++) {
        for (int j = 1; j < 19; j++) {
            int sum = img2[i - 1][j] + img2[i + 1][j] + img2[i][j - 1] + img2[i][j + 1];
            img2[i][j] = sum/4;
        }
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%4d", img2[i][j]);
        }
        printf("\n");
    }
}

//3*3幻方 
void f8(){
int matrix[3][3]={0};
int row=0;
int col=1;
for(int i=1;i<=9;i++)
{
	matrix[row][col]=i;
	row--;
	col++;
	if(row<0&&col>2)
	{
		row+=2;
		col--;
	}
	else if(row<0)row=2;
	else if(col>2)col=0;
	else if(matrix[row][col]!=0)
	{
		row+=2;
		col--;
	}
}
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	printf("%5d",matrix[i][j]);
	puts("");
}
}

//5*5幻方 
void f9()
{
int matrix[5][5]={0};
int row=0;
int col=2;
for(int i=1;i<=25;i++)
{
	matrix[row][col]=i;
	row--;
	col++;
	if(row<0&&col>4)
	{
		row+=2;
		col--;
	}
	else if(row<0)row=4;
	else if(col>4)col=0;
	else if(matrix[row][col]!=0)
	{
		row+=2;
		col--;
	}
}
for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	printf("%5d",matrix[i][j]);
	puts("");

}
}
	return 0;
}

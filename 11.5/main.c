#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>

int main() {
void f2(){
	int max=0;
	int average,sum,tmp;
	double result=0.0;
	int arr[50]={0};
	int min=100;
	for(int i=0;i<50;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<50;i++)
	{
		sum+=arr[i];
		if(max<arr[i])max=arr[i];
		if(min>arr[i])min=arr[i];
	}
	average=sum/50.0;
	for(int i=0;i<50;i++)
	{
		tmp+=((arr[i]-average)*(arr[i]-average));
	}
	result=(sqrt(tmp))/50.0;
	printf("%.6f\n",result);
	printf("the max score is :%d\n",max);
	printf("the min score is :%d\n",min);
	printf("the average score is :%.2f\n",sum/50.0);
}


void f3(){
	int max=0;
	int average,sum,tmp;
	double result=0.0;
	int arr[50]={0};
	int min=100;
	srand(time(NULL));
	for(int i=0;i<50;i++)
	{
		arr[i]=(rand()%41)+60;
	}
	for(int i=0;i<50;i++)
	{
		sum+=arr[i];
		if(max<arr[i])max=arr[i];
		if(min>arr[i])min=arr[i];
	}
	average=sum/50.0;
	for(int i=0;i<50;i++)
	{
		tmp+=((arr[i]-average)*(arr[i]-average));
	}
	result=(sqrt(tmp))/50.0;
	printf("%.6f\n",result);
	printf("the max score is :%d\n",max);
	printf("the min score is :%d\n",min);
	printf("the average score is :%.2f\n",sum/50.0);
}


void f4(){
int arr[10]={0};
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++)
	{
		arr[i]=arr[i]*2;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}	
}


void f5(){
    	
void shuffle(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

    	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
    srand(time(NULL));
    shuffle(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
	
	void f6(){
	int index=0;
	int temp;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		index=rand()%10;
		temp=arr[i];
		arr[i]=arr[index];
		arr[index]=temp;
	}
	 for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
	}
	
	void f7(){
	int arr[20]={1,1};
	for(int i=2;i<20;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	for (int i = 0; i < 20; i++) 
	{
        printf("%d ", arr[i]);
    }
	}
	
	void f8(){
	int math[50]={0};
	int chinese[50]={0};
	int english[50]={0};
	srand(time(NULL));
	for(int i=0;i<50;i++)
	{
		math[i]=rand()%101;
		chinese[i]=rand()%101;
		english[i]=rand()%101;
	}
	for(int i=0;i<50;i++)
	{
		printf("%d ",(math[i]+chinese[i]+english[i])/3);
	}
	}
	
	
	void f9(){
	int score[150]={0};
	srand(time(NULL));
	for(int i=0;i<150;i++)
	{
		score[i]=rand()%101;
	}
	int sum=0;
	for(int i=0;i<150;i+=3)
	{
		sum=score[i]+score[i+1]+score[i+2];
		printf("%d ",sum/3);
	}
	}
	
	
    void f10(){
    int arr[10]={0};
    srand(time(NULL));
    for(int i=0;i<10;i++) {
        arr[i]=(rand()%21)*2;
    }
    int temp=0;
    int count=0;
    int isEqual=1;
    while(isEqual&&count<=1000) {
        for(int i=0;i<9;i++)
		{
            arr[i+1]+=(int)((arr[i]/2.0)+0.5);
        }
        arr[0]=(int)((arr[9]/2.0)+0.5);
        for(int i=0;i<9;i++) {
            if(arr[i]==arr[i+1])
			{
                isEqual=0;
            } 
			else 
			{
                isEqual=1;
                break;
            }
        }
        count++;
    }
    if(count<=1000)
	printf("%d",count);
	else
	printf("no");
	}
	
	
	int poker[54]={0};
	for(int i=0;i<54;i++)
	{
		poker[i]=i;
	}
	int index=0;
	int temp;
	srand(time(NULL));
	for(int i=0;i<54;i++)
	{
		index=rand()%54;
		temp=poker[i];
		poker[i]=poker[index];
		poker[index]=temp;
	}
		for(int i=0;i<54;i++)
	{
	printf("%d ",poker[i]);
	}
	int a=0;
	scanf("%d",&a);
	for(int i=0;i<54;i++)
	{
		switch(poker[i]/13)
		{
			
		}
	}
    return 0;
}




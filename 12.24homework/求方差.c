#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n=0;
	scanf("%d",&n);
	int arr[n];
	float avg;
	float var=0.0;
	float sum=0.0,sum2=0.0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/n;
	for(int i=0;i<n;i++){
		sum2+=(arr[i]-avg)*(arr[i]-avg);
	}
	printf("%.2f",sum2/n);
	return 0;
}

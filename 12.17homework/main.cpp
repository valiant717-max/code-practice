#include <iostream>
int bubble(int*ptr,int a){
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1-i;j++){
			if(ptr[j]>ptr[j+1]){
			int temp=0;
			temp=ptr[j];
			ptr[j]=ptr[j+1];
			ptr[j+1]=temp;
		}
		}
	}
	return ptr[a/2];
}

int main(int argc, char** argv) {
	int a,b;
	scanf("%d%d",&a,&b);
	int arr[b];
	int arr4[b];
	if(a%2==0)printf("ERROR");
	else
	{
	for(int i=0;i<b;i++){
		scanf("%d",&arr[i]);
		arr4[i]=arr[i];
	}
	int arr2[a];
	int j=0;
	while(j+a-1<b){
	for(int i=0;i<a;i++){
		arr2[i]=arr[j+i];
	}
	int arr3[a];
	for(int i=0;i<a;i++){
		arr3[i]=arr4[j+i];
	}
	arr[j+a/2]=bubble(arr3,a);
	j++;
	}
	for(int i=0;i<b;i++){
		printf("%d ",arr[i]);
	}
	} 
	return 0;
}

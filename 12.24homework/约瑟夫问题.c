#include <stdio.h>
int main() {
	int n,k,m;
	scanf("%d%d%d",&n,&k,&m);
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=i+1;
	} 
	int index=k-1;
	int count=n;
	while(count>2){
		index=(index+m-1)%count;
		for(int j=index;j<count;j++){
			arr[j]=arr[j+1];
		}
		count--;
	}
	printf("%d %d",arr[0],arr[1]);
    return 0;
}

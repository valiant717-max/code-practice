#include <stdio.h>
#include <stdlib.h>
void printlight1(int light){
	int arr[32];
	for(int i=0;i<32;i++){
		arr[32-1-i]=light%2;
		light/=2;
	} 
	for(int i=0;i<32;i++){
		printf("%d",arr[i]);
	}
}
void printlight2(int light){
	unsigned int mask=1;
	mask=mask<<31;
	for(int i=0;i<32;i++){
		if((light&mask)==mask)printf("1");
		else printf("0");
		mask=mask>>1;
}
printf("\n");
}
void setLight(int *light,int n){
	unsigned int mask=1;
	mask=mask<<(n-1);
	*light=(*light)|mask;
}
void turnofflight(int *light,int n){
	unsigned int mask=1;
	mask=mask<<(n-1);
	mask=~mask;
	*light=(*light)&mask;
}
int main(int argc, char *argv[]) {
	int light;
	light=0;
	setLight(&light,3);
	printlight2(light);
	turnofflight(&light,3);
	printlight2(light);
	int a=123;
	int b=456; 
	a=a^b;
	printf("%d\n",a);
	a=a^b;
	printf("%d\n",a);
	return 0;
}

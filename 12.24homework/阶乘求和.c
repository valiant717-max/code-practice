#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000
int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        int sum=0;
        int temp = 1;
        for(int k=1;k<=a;k++){
        	temp=(temp*k)%1000000;
        	sum=(sum+temp)%1000000;
		} 
        printf("%d\n", sum);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[]) {
    int n = 0;
    scanf("%d", &n);
    int arr[10000] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", arr[0]);
    int temp = 0;
    for (int j = 1; j < n; j++) {
    	//Ã°ÅÝÅÅÐò²¢´òÓ¡ 
        for (int i = 0; i < j; i++)
        {
                for (int m = 0; m<j - i; m++) {
                    if (arr[m] > arr[m + 1]) {
                        int temp = arr[m];
                        arr[m] = arr[m + 1];
                        arr[m + 1] = temp;
                    }
                }
        }
        for (int i = 0; i < j+1; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}

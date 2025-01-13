#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    long long int arr1[m][m];
    long long int arr2[m][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &arr1[i][j]);
            arr2[i][j] = arr1[i][j];
        }
    }
    long long int arr3[m][m];  
    for (int p = 1; p < n; p++) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                arr3[i][j] = 0;
                for (int k = 0; k < m; k++) {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                arr2[i][j] = arr3[i][j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%lld ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

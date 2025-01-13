#include <stdio.h>
#include <stdlib.h>
int main() {
    int x, h;
    scanf("%d %d", &x, &h);
	int image_matrix[x][x];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d", &image_matrix[i][j]);
        }
    }
	int kernel_matrix[h][h];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++) {
            scanf("%d", &kernel_matrix[i][j]);
        }
    }
	//Ðý×ª 
 	for (int i = 0; i < h; i++) {
        for (int j = 0; j < h/2; j++) {
        	int temp=0;
        	temp=kernel_matrix[j][i];
            kernel_matrix[j][i] = kernel_matrix[h-1-j][h-1-i];
            kernel_matrix[h-1-j][h-1-i]=temp;
        }
    }
    for(int i=0;i<h/2;i++){
    		int temp=0;
        	temp=kernel_matrix[h/2][i];
            kernel_matrix[h/2][i] = kernel_matrix[h/2][h-1-i];
            kernel_matrix[h/2][h-1-i]=temp;
	}

	int  result_matrix[x][x];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            int sum = 0;
            for (int m = 0; m < h; m++) {
                for (int n = 0; n < h; n++) {
                    int row = i + m - h / 2;//¶ÔÆë 
                    int col = j + n - h / 2;
                   if (0 <= row && row < x && 0 <= col && col < x)
                    sum += image_matrix[row][col]* kernel_matrix[m][n];
                }
            }
            result_matrix[i][j] = sum;
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d ", result_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int m, n;
    scanf("%d%d", &m, &n);
  	int matrix[m][n];
    int num = 1;  // 用于记录当前要填充的数字
    for (int i = 0; i < m + n - 1; i++) {
        // 偶数序号的斜线路径（从下往上填充数字）
        if (i % 2 == 0) {
            int start_row = (i < m)? i : m - 1;
            int start_col = (i < m)? 0 : i - m + 1;
            while (start_row >= 0 && start_col < n) {
                matrix[start_row--][start_col++] = num++;
            }
        }
        // 奇数序号的斜线路径（从上往下填充数字）
        else {
            int start_row = (i < n)? 0 : i - n + 1;
            int start_col = (i < n)? i : n - 1;
            while (start_row < m && start_col >= 0) {
                matrix[start_row++][start_col--] = num++;
            }
        }
    }
    // 输出填充好的矩阵，元素之间用一个空格隔开
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

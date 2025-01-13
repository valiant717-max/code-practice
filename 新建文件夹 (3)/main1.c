#include <stdio.h>
#include <string.h>

#define MAX_LEN 510

// 实现大整数加法
void add(char *a, char *b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int max_len = len_a > len_b? len_a : len_b;
    int result[MAX_LEN] = {0};  // 存储结果，初始化为0
    int carry = 0;  // 进位

    // 从低位开始逐位相加
    for (int i = 0; i < max_len; i++) {
        int num_a = i < len_a? a[len_a - 1 - i] - '0' : 0;
        int num_b = i < len_b? b[len_b - 1 - i] - '0' : 0;
        int sum = num_a + num_b + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry > 0) {  // 如果最后还有进位
        result[max_len] = carry;
        max_len++;
    }

    // 输出结果，倒序输出
    for (int i = max_len - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char a[MAX_LEN];
        char b[MAX_LEN];
        scanf("%s %s", a, b);
        add(a, b);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
   	gets(str);
    int len = strlen(str);
    int start = 0;  // 标记单词起始位置
        for (int i = 0; i <= len; i++) {
            if (i == len || ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))) {
                // 找到单词结尾或者字符串结尾且当前字符不是字母时
                int end = i - 1;
                while (start < end) {
                    char temp = str[start];
                    str[start] = str[end];
                    str[end] = temp;
                    start++;
                    end--;
                }
                start = i + 1;  
            }
        }
        printf("%s", str);
    return 0;
}

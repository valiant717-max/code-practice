#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
   	gets(str);
    int len = strlen(str);
    int start = 0;  // ��ǵ�����ʼλ��
        for (int i = 0; i <= len; i++) {
            if (i == len || ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))) {
                // �ҵ����ʽ�β�����ַ�����β�ҵ�ǰ�ַ�������ĸʱ
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 将十进制数转换为二进制字符串
void decimalToBinary(char *binary, int decimal) {
    for (int i = 7; i >= 0; i--) {
        binary[i]  = (decimal & 1) + '0';//按位与1保留最低位 
        decimal>>=1;
    }
    binary[8] = '\0';
}
// 根据给定的01串划分片段并进行压缩编码，返回压缩后的十进制数组及长度
int *compressBinary(char *binary, int *compressedLength) {
    int *compressed = NULL;
    int count = 0;
    int i = 0;
    while (binary[i]!= '\0') {
        int len = 0;
        char color = binary[i];
        while (binary[i] == color && binary[i]!= '\0') {
            len++;
            i++;
        }
        // 按照规则构造表示片段的字节，确保长度不超过127
        int byte = (color == '0'? 0 : 128) | len;//按位或0得到本身，按位或1得到1 
        compressed = (int *)realloc(compressed, (count + 1) * sizeof(int));
        compressed[count++] = byte;
    }
    *compressedLength = count;
    return compressed;
}
int main() {
    int n;
    scanf("%d", &n);
    int decimals[n/8];
    for (int i = 0; i < n/8; i++) {
        scanf("%d", &decimals[i]);
    }
    char binary[8000];
	binary[0]= '\0';//将这个字符数组初始化为一个空字符串
    for (int i = 0; i < n/8; i++) {
    	char bin[9];
        decimalToBinary(bin, decimals[i]);
        strcat(binary, bin);
    }
    int compressedLength;
    int *compressed = compressBinary(binary, &compressedLength);
    for (int i = 0; i < compressedLength; i++) {
        printf("%d ", compressed[i]);
    }
    printf("\n");
    free(compressed);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ��ʮ������ת��Ϊ�������ַ���
void decimalToBinary(char *binary, int decimal) {
    for (int i = 7; i >= 0; i--) {
        binary[i]  = (decimal & 1) + '0';//��λ��1�������λ 
        decimal>>=1;
    }
    binary[8] = '\0';
}
// ���ݸ�����01������Ƭ�β�����ѹ�����룬����ѹ�����ʮ�������鼰����
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
        // ���չ������ʾƬ�ε��ֽڣ�ȷ�����Ȳ�����127
        int byte = (color == '0'? 0 : 128) | len;//��λ��0�õ�������λ��1�õ�1 
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
	binary[0]= '\0';//������ַ������ʼ��Ϊһ�����ַ���
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

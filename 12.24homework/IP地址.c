#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 判断字符串是否是有效的IPv4地址
int isValidIPv4(char *ip) {
    int dots = 0;
    char *token;
    token = strtok(ip, ".");
    while (token!= NULL) {
        if (dots > 3) return 0;
        int num = atoi(token);
        if (num < 0 || num > 255 || (num == 0 && strlen(token) > 1) || (num > 0 && token[0] == '0')) return 0;
        token = strtok(NULL, ".");
        dots++;
    }
    return dots == 3;
}

// 判断字符串是否是有效的IPv6地址
int isValidIPv6(char *ip) {
    int colons = 0;
    char *token;
    token = strtok(ip, ":");
    while (token!= NULL) {
        if (colons > 7) return 0;
        if (strlen(token) > 4 || strlen(token) == 0) return 0;
        for (int i = 0; i < strlen(token); i++) {
            if (!isxdigit(token[i])) return 0;
        }
        token = strtok(NULL, ":");
        colons++;
    }
    return colons == 7;
}

// 主函数，判断给定字符串是IPv4、IPv6还是无效地址
int validIPAddress(char *ip) {
    if (isValidIPv4(ip)) return 4;
    if (isValidIPv6(ip)) return 6;
    return 0;
}

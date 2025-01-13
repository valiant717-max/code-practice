#include <stdio.h>
#include <stdlib.h>
int main() {
    int m;
    scanf("%d", &m);
    int numbers[20];
    char symbols[20];
    char ch;
    for (int i = 0; i < m; i++) {
        scanf("%d", &numbers[i]);
        symbols[i] = '+';
        if ((ch = getchar())!=' '&&ch!='\n') {
          symbols[i]=ch;
        }
    }
    int maxHeight = 0;
    for (int i = 0; i < m; i++) {
        if (numbers[i] > maxHeight) {
            maxHeight = numbers[i];
        }
    }

    for (int h = maxHeight; h > 0; h--) {
        for (int i = 0; i < m; i++) {
            if (numbers[i] >=h)printf("%c ",symbols[i]);
            else printf("  ");
    }
     printf("\n");
}
    for (int i = 0; i < 2*m-1; i++) {
        printf("-");
    }
    printf("\n");
    int minHeight = 0;
    for (int i = 0; i < m; i++) {
        if (numbers[i] < minHeight) {
            minHeight = numbers[i];
        }
    }
     for (int h = -1; h >= minHeight; h--) {
        for (int i = 0; i < m; i++) {
            if (numbers[i]<=h)printf("%c ",symbols[i]);
            else printf("  ");
	}
	printf("\n");
}
    return 0;
}


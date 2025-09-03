#include <stdio.h>
#include <string.h> 
void add(char *a, char *b) {
	int lena=strlen(a);
	int lenb=strlen(b);
	int max=lena>lenb?lena:lenb;
	int num[max];
	int jin=0;
	for(int i=0;i<max;i++){
		int numa=lena>i?a[lena-i-1]-'0':0;
		int numb=lenb>i?b[lenb-i-1]-'0':0;
		num[i]=(numa+numb+jin)%10;
		jin=(numa+numb+jin)/10;
	}
	if(jin>0)printf("%d",jin);
	for(int i=0;i<max;i++){
		printf("%d",num[max-i-1]);
	}
	printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char a[600];
        char b[00];
        scanf("%s %s", a, b);
        add(a, b);
    }
    return 0;
}

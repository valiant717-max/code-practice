#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	char str[][100];
	int count=0;
	for(int i=0;;i++){
		gets(str[i]);
		count++;
	}
	for(int j=0;j<count;j++){
		strcat(str[j],str[j+1]);
	}
	return 0;
}

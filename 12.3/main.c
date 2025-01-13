#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char r1[21];
    char r2[21];
    int a=0;    
	int b=0;
    int c1=0;  
	int c2=0;
	scanf("%s",&r1);
	scanf("%s",&r2);
	a=strlen(r1);
	b=strlen(r2);
    if(a!=b){printf("No"); return 0;}
    for(int i=0;i<a;++i)
    {
        for(int j=0;j<a;++j)
        {
            if(r1[i]==r2[j])
            {
                ++c1;
                r2[j]=' ';
                if(i==j) ++c2;
                break;
            }
        }
    }
    if(a==c1 && c1!=c2) {printf("Yes"); return 0;}
    printf("No"); 
    return 0;
}

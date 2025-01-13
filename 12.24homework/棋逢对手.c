#include <stdio.h>
#include <stdlib.h>
struct Student
{
	char name;
	int a;
	int b;
	int c;
};

int main(){
	int n=0;
	scanf("%d",&n);
	struct Student students[n];
	for(int i=0;i<n;i++)
	{
		scanf(" %c%d%d%d",&students[i].name,&students[i].a,&students[i].b,&students[i].c);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((students[i].a-students[j].a<=5&&students[i].a-students[j].a>=-5)&&((students[i].b-students[j].b)<=5&&(students[i].b-students[j].b)>=-5)&&(students[i].c-students[j].c<=5&&students[i].c-students[j].c>=-5)
		&&((students[i].a+students[i].b+students[i].c)-
		(students[j].a+students[j].b+students[j].c)<=10)&&(students[i].a+students[i].b+students[i].c)-
		(students[j].a+students[j].b+students[j].c)>=-10)		
		printf("%c %c\n",students[i].name,students[j].name);
		}
	}
    return 0;
}return 0;
}

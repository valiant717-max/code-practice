#include<stdio.h>
#include<string.h>
void xiaoxie(const char* a, char* b)
{
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			b[i] = a[i] + 'a' - 'A';
		}
		else
		{
			b[i] = a[i];
		}
	}
	b[strlen(a)] = '\0';
}
int finds(const char* a, const char* b, char *index)
{
	char *index2=strstr(index,b);
	if(index2!=NULL){
		return index2-a;
	}
	else return 0; 
}
int main()
{
	char in[110],in_low[110], find[110],find_low[110];
	gets(in);
	gets(find);
	xiaoxie(in, in_low);
	xiaoxie(find, find_low);
	char *index=in_low,out_num=0;
	int d = 0;
	while (index!=NULL)
	{
		int from = finds(in_low, find_low,index);
		if (from == 0)
		{
			for (; out_num < strlen(in); out_num++)
			{
				printf("%c", in[out_num]);
			}
			return 0;
		}
		for (; out_num < from; out_num++)
		{
			printf("%c", in[out_num]);
			index++;
		}
		if (from < strlen(in))
		{
			printf("/*");
			d = 1;
		}
		for (int i = from; i < from + strlen(find); i++)
		{
			printf("%c", in[i]);
			out_num++;
			index++;
		}
		if (d == 1)
		{
			printf("*/");
			d = 0;
		}
	}
}

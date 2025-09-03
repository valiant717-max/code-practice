#include<stdio.h>
int jiecheng(int a)
{
	if (a == 0||a==1)
	{
		return 1;
	}
	else return a*jiecheng(a-1);
}
int calgorithm(int a, int b)
{
	if (b == 0 || a==0)
	{
		return 1;
	}
	int re = jiecheng(a) / (jiecheng(b) * jiecheng(a - b));
	return re;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int i2 = 0; i2 <= i; i2++)
		{
			printf("%d ", calgorithm(i, i2));
		}
		printf("\n");
	}
}

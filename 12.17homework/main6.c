#include<stdio.h>
#include<math.h>
int main()
{
	double input;
	scanf("%lf", &input);
	//借助对数换底公式判断以 2 为底对 input 取对数的结果是否为整数
	if (log(input) / log(2.0) - (int)((log(input) / log(2))) != 0 && (int)input % 1024 != 0)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	main();
	return 0;
}

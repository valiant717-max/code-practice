#include<stdio.h>
#include<math.h>
int main()
{
	double input;
	scanf("%lf", &input);
	//�����������׹�ʽ�ж��� 2 Ϊ�׶� input ȡ�����Ľ���Ƿ�Ϊ����
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

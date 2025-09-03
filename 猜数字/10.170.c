#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	void game()
	{
		int r=rand()%100+1;
		int guess=0;
		int count=5;
		while(count)
		{	printf("你还有%d次机会",count);
			printf("请猜数字>:");
			scanf("%d",&guess);
			if(guess<r)
			printf("猜小了");
			else if(guess>r)
			printf("猜大了");
			else
			{
			printf("恭喜你，猜对了");
			break;}
			count--;
		}
		if(count==0)
		printf("很抱歉，您已用完所有机会，正确值是：%d",r); 
	}
	
	void menu()
	{
		printf("******************\n");
		printf("*****1.play*******\n");
		printf("*****0.exit*******\n");
		printf("******************\n");
	}
	
	int main(int argc, char *argv[]) {
	int input=0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			game();
			break;
			case 0:
			printf("游戏结束\n");
			default:
			printf("选择错误，重新选择\n");
			break;
		}
	}while(input);
	return 0;
}
	

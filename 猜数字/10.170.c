#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	void game()
	{
		int r=rand()%100+1;
		int guess=0;
		int count=5;
		while(count)
		{	printf("�㻹��%d�λ���",count);
			printf("�������>:");
			scanf("%d",&guess);
			if(guess<r)
			printf("��С��");
			else if(guess>r)
			printf("�´���");
			else
			{
			printf("��ϲ�㣬�¶���");
			break;}
			count--;
		}
		if(count==0)
		printf("�ܱ�Ǹ�������������л��ᣬ��ȷֵ�ǣ�%d",r); 
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
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			game();
			break;
			case 0:
			printf("��Ϸ����\n");
			default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	}while(input);
	return 0;
}
	

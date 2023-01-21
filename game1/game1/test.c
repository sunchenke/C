#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("********  1.play *****\n");
	printf("********  0.exit *****\n");
	printf("**********************\n");

}

void game()
{
	char ret = 0;
	//���ȴ��������Ҫһ��3*3�Ķ�ά����
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, 3, 3);
	//��ʾ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = Iswin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("���Ӯ\n");
	}
	else if ('#' == ret)
	{
		printf("����Ӯ\n");
	}
	else if ('Q' == ret)
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int input = 0;
	srand(rand((unsigned int)time(NULL)));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;

		}
	}while (input);
		return 0;
}
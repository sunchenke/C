#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("**********************\n");
	printf("******** 1.play  *****\n");
	printf("******** 0.exit  *****\n");
	printf("**********************\n");

}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//³õÊ¼»¯ÆåÅÌ
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//´òÓ¡ÆåÅÌ
	DisPlayBoard(show, ROW, COL);
	//²¼ÖÃÀ×
	SetMine(mine, ROW, COL);
//	DisPlayBoard(mine, ROW, COL);
	//ÅÅ²éÀ×
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
		}
	
	} while (input);

	return 0;
}
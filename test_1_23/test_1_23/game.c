#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int row, int col,int set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}

}

void DisPlayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("****** 扫雷 *******\n");
	for (j = 0; j <= row; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
} 


void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}

}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1]+
		mine[x-1][y+1]-8*'0');



}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x = 0; 
	int y = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入坐标:>");
		scanf("%d %d",&x,&y);
		if (show[x][y] == '*')
		{
			if (x >= 1 && x <= 9 && y >= 1 & y <= 9)
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisPlayBoard(mine, ROW, COL);

					break;
				}
				else
				{
					int count = GetMineCount(mine, x, y);
					show[x][y] = count +'0';
					DisPlayBoard(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("输入坐标非法，请重新输入\n");
			}
		}
		else
		{
			printf("该位置已被排查过，请重新输入\n");
		}
		
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，通关了\n");
	}

}

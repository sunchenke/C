#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9  //��
#define COL 9  //��
#define ROWS ROW+2   //��Ϊ�Ų����Ǹ���8���㣬�������Ե�ĵ㸽���ǻ���ȱ�ݵģ���Ϊ��2�ţ�����+2
#define COLS COL+2
#define EASY_COUNT 10

void InitBoard(char board[ROWS][COLS], int row, int col,int set);
void DisPlayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);

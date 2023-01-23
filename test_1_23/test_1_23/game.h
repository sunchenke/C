#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9  //行
#define COL 9  //列
#define ROWS ROW+2   //因为排查雷是附近8个点，但是最边缘的点附近是会有缺陷的，因为有2排，所以+2
#define COLS COL+2
#define EASY_COUNT 10

void InitBoard(char board[ROWS][COLS], int row, int col,int set);
void DisPlayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);

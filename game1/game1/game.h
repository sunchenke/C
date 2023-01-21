#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//函数的声明
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
char Iswin(char board[ROW][COL], int row, int col);


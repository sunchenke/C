#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//����������
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void PlayMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char Iswin(char board[ROW][COL], int row, int col);


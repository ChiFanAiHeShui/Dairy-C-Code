#define  ROW 9
#define  COL 9
#define  ROWS  ROW + 2
#define  COLS  COL + 2
#define  COUNT_TYPE 10

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void DisplayBoard(char arr[ROWS][COLS],int row ,int col );
void Set_Mine(char mine[ROWS][COLS],int row,int col);
void InitBoard(char arr[ROWS][COLS],int rows,int cols,char ret);
void Fine_Mine(char arr[ROWS][COLS],char arr1[ROWS][COLS], int x, int y);


int Count_Mine(char arr[ROWS][COLS], int x , int y );

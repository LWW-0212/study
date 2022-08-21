#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define hang 3
#define lie 3
void game();
void initboard(char board[hang][lie], int h, int l);
void displayboard(char board[hang][lie],int h,int l);
void playermove(char board[hang][lie], int x, int y);
void computermove(char board[hang][lie], int x, int y);

char win(char board[hang][lie], int h, int li);
int isfull(char board[hang][lie], int h, int li);
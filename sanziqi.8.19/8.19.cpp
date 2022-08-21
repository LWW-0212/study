#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	srand((unsigned int)time(NULL));
	//数组 存放走出的棋盘信息
	char board[hang][lie] = { 0 };
	//初始化棋盘
	initboard(board, hang, lie);
	//打印出棋盘
	displayboard(board, hang, lie);
	while (1)
	{
		//玩家下棋
		playermove(board, hang, lie);
		displayboard(board, hang, lie);
		//判断输赢
		if ('c' != win(board, hang, lie))
		{
			break;
		}
		//电脑下棋
		computermove(board, hang, lie);
		displayboard(board, hang, lie);
		//判断输赢
		if ('c' != win(board, hang, lie))
		{
			break;
		}
	}
	if ('0' == win(board, hang, lie))
		puts("你赢了！\n");
	else if ('1' == win(board, hang, lie))
		puts("电脑赢了\n");
	else
		puts("平局\n");
}

int main()
{
	int a = 0;
	do
	{
		printf("############################\n");
		printf("#### 1.进入  0.退出 ########\n");
		printf("############################\n");
		printf("是否进入游戏：");
		scanf("%d", &a);

		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			break;
		}
	} while (a);
		return 0;
}
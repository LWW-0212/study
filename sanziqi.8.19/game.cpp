#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void initboard(char board[hang][lie], int h, int l)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j <= l;j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[hang][lie], int h, int li)
{
	int i = 0;
	for (i = 0; i < h; i++)
	{
		int j = 0;
		//��ӡһ������
		for (j = 0; j < li; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < li - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
		if (i< h - 1)
		{
			for (j = 0; j < li; j++)
			{
				printf("---");
				if (j < li - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void playermove(char board[hang][lie], int x, int y)
{
	agian:
	puts("���������\n");
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
	{
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '0';
		}
		else
		{
			puts("��λ���ѱ�ռ�ã�����������\n");
			goto agian;
		}
	}
	else
	{
		puts("���ӷǷ�!\n");
		goto agian;
	}
}

void computermove(char board[hang][lie], int x, int y)
{
to:
	puts("��������\n");
	x = rand() % hang;
	y = rand() % lie;
	if (board[x][y] == ' ')
	{
		board[x][y] = '1';
	}
	else
		goto to;
}
//�ж���Ӯ
char win(char board[hang][lie], int h, int li)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < hang; x++)
	{
		//������
		if (board[0][x] == board[1][x] && board[1][x] == board[2][x] && board[0][x] != ' ')
		{
			return board[0][x];
		}
		//������
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][0] != ' ')
		{
			return board[x][0];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//ƽ��
	if (3 == isfull(board, hang, lie))
		return 3;
	return 'c';
}

int isfull(char board[hang][lie], int h, int li)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < hang; x++)
	{
		for (y = 0; y < lie; y++)
		{
			if (board[x][y] == ' ')
			{
				return 2;
			}
		}
	}
	return 3;
}
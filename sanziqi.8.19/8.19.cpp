#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	srand((unsigned int)time(NULL));
	//���� ����߳���������Ϣ
	char board[hang][lie] = { 0 };
	//��ʼ������
	initboard(board, hang, lie);
	//��ӡ������
	displayboard(board, hang, lie);
	while (1)
	{
		//�������
		playermove(board, hang, lie);
		displayboard(board, hang, lie);
		//�ж���Ӯ
		if ('c' != win(board, hang, lie))
		{
			break;
		}
		//��������
		computermove(board, hang, lie);
		displayboard(board, hang, lie);
		//�ж���Ӯ
		if ('c' != win(board, hang, lie))
		{
			break;
		}
	}
	if ('0' == win(board, hang, lie))
		puts("��Ӯ�ˣ�\n");
	else if ('1' == win(board, hang, lie))
		puts("����Ӯ��\n");
	else
		puts("ƽ��\n");
}

int main()
{
	int a = 0;
	do
	{
		printf("############################\n");
		printf("#### 1.����  0.�˳� ########\n");
		printf("############################\n");
		printf("�Ƿ������Ϸ��");
		scanf("%d", &a);

		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			break;
		}
	} while (a);
		return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int getmax(int x, int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 34;
//	int de = getmax(a, b);
//	printf("%d",de);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = "hello wolrd";
//	memset(arr, '#', 3);
//	puts(arr);
//	return 0;
//}
// 
// 
//#include<stdlib.h>
//#include <time.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟内关机\n输入我是猪取消关机\n");
//	scanf("%s ", &input);
//	if (strcmp(input, "我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//	return 0;
//}
#include<time.h>
#include <stdlib.h>    
void menu()
{
	printf("猜1到100之间的数字\n");
	printf("************************************\n");
	printf("*********1.开始游戏0.结束游戏*******\n");
	printf("************************************\n");
}
void game()
{
	int get = rand()%100+1;
		int c = 0;
	printf("请输入数字\n");
	
	while (1)
	{
		scanf("%d", &c);
		if (c == get)
		{
			printf("猜对了\n");
			break;
		}
		else if (c < get)
			printf("猜小了\n");
		else
			printf("猜大了\n");
	}
}
int main()
{
	srand((unsigned long)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
		return 0;
}
//int main()
//{
//	int a;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	for (a = 1; a <= 9; a++)
//	{
//		int b = 1;
//		for (b = 1; b <= a; b++)// please code b<=a;******
//		{
//			printf("%2d=%d*%d  ", a*b, a, b);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { -41,-2,-7,-67,-865,-98,-4,-45,-23,-25 ,-12};
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		if (max <= arr[i])
//			max = arr[i];
//	}
//	printf("max= %d", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	double sum = 0.0;
//	int n = 1;
//	for (a = 0; a <= 100; a++)
//	{
//		sum += n*1.00/ a;
//	/*	n = -n;*/
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int count = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//			count++;
//		if (a / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 2;
//		for (a = 2; a <= i; a++)
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//		if(i==a)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int a = 2;
//		for (a = 2; a <=i; a++)
//		{
//			if (i % a == 0)
//				break;
//		}
//		if (a == i)
//		{
//			count++;
//			printf("%d ", a);
//		}
//	}
//
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int tep = *x;
//	*x = *y;
//	*y = tep;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 40;
//	printf("%d %d\n", a, b);
//	swap(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int get_zhi(int x)
//{
//	int i = 2;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			break;
//	}
//	if (i == x)
//		printf("质数");
//	else
//		printf("非");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		scanf("%d", &a);
//		get_zhi(a);
//	}
//	/*printf("%d", out);*/
//	return 0;
//}

//int isren(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if(isren(a) == 1)
//		printf("%d ", a);
//	}
//	return 0;
//}
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	//未初始化
	/*int* p;
	*p = 10;
	printf("%d", *p);*/

	//指针越界
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 12; i++)
	//{
	//	*p = i;
	//	p++;
	//}

	int* p = test();
	*p = 56;
	printf("%d\n", *p);
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//打印乘法口诀
//void print_table(int a)
//{
//	int i = 1;
//	int c = 1;
//	for (i = 1; i <=a; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			
//			printf("%d*%d=%3d ",i,j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print_table(a);
//	return 0;
//}
/////判断并打印素数
//int main()
//{
//	int count = 0;
//	for (int i = 100; i < 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (int j = 2; j < i; j++)///不是素数的都break!!!
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)//不要写到for循环里面！！！
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
int my_strlen(char arr[])
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
//void reverse_arr(char* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_arr(char* arr)
//{
//
//	char tmp = arr[0];
//	int sz = my_strlen(arr);
//	arr[0] = arr[sz - 1];
//	arr[sz - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_arr(arr + 1);
//	arr[sz - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = my_strlen(arr);
//	reverse_arr(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//
//int digitsum(int a)
//{
//	int result = 0;
//	if (a > 10)
//	{
//		result = digitsum(a / 10) + a%10;
//	}
//	else
//	return a;
//}
//int main()
//{
//	int a = 123;
//	int result = digitsum(a);
//	printf("%d\n", result);
//	return 0;
//}

//double cifang(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if(k > 0)
//		return n * cifang(n, k - 1);
//	else
//		return 1.0 / cifang(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = cifang(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//int feibo(int a)
//{
//	int i = 1;
//	int j = 1;
//	int k = 1;
//	while (a > 2)
//	{
//		k = i + j;
//		i = j;
//		j = k;
//		a--;
//	}
//	return k;
//}
int feibo(int a)
{
	if (a ==0)
		return 0;
	if (a < 2)
		return 1;
	return feibo(a - 1) + feibo(a - 2);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int res = feibo(a);
	printf("%d\n", res);
	return 0;
}




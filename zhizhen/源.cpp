#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//δ��ʼ��
//	/*int* p;
//	*p = 10;
//	printf("%d", *p);*/
//
//	//ָ��Խ��
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < 12; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//
//	//��������������
//	/*int* p = test();
//	*p = 56;
//	printf("%d\n", *p);
//	return 0;*/
//	/*int k = 10;
//	int* p = &k;
//	int* p = NULL;
//	if (NULL!=p)*/
//
//	//ģ��ʵ��strlen
//	
//}
// ///����һ
//int my_strlen(char* chang)
//{
//	char* start = chang;
//	char* end = chang;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
////////������
//int my_strlen(char* chang)
//{
//	int count = 0;
//	while (*chang != '\0')
//	{
//		chang++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "hellocui";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}
//#define a 3
//int main()
//{
//	int arr[a];
//	int* p;
//	for (p = &arr[a-1]; p > &arr[0];)//ָ��Ƚϴ�С
//	{
//		*--p = 0;
//		printf("%d ", arr[a-1]);
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = "hellocuiyan";
//	printf("%d ", sizeof(arr));
//	printf("%d ", strlen(arr));
//	return 0;
//}

int main()
{

	int a = 0;
	int b = 2;
	int c = 12;
	int* arr[] = { &a,&b,&c };//ָ������--���ָ�������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}
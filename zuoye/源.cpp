#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ʼ��Ϊ�㣡����
//1.  void init(int* shou,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(shou + i) = 0;
//	}
//}
// 2..
//void init(int arr[], int sz)
//{
//	int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			arr[i] = 0;
//		}
// }
//����Ԫ��
//  1....void reverse(int* arr, int sz)
//{
//	int i = 0;
//	while ((arr + i)< (arr + sz - i - 1))
//	{
//		//ʵ�ֵ��ã�����
//		int tmp = *(arr + i);
//		*(arr + i) = *(arr + sz - i - 1);
//		*(arr + sz - i - 1) = tmp;
//		i++;
//	}
//}
//2.....
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//дһ��print����
//void print(int* arr, int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", *(arr + a));
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	/*init(arr,sz);*/
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
 
//void change(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	while (i<sz)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		i++;
//	}
//	printf("\n");
//}
//int main()
//{
//	//�������������Ԫ��
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, sz);
//	print(arr2, sz);
//	change(arr1, arr2, sz);
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}

//ͳ�ƶ�������1�ĸ���
int count_bit_one(int a)
{
	int count = 0;
	int  i = 0;
	for(i=0;i<32;i++)
	{
		if (((a>>i) & 1) == 1)
		{
			count++;
		}
    }
	return count;
}

int count_bit_one(unsigned int a)
{
	int count = 0;
	while (a)
	{
		if (a % 2 == 1)
		{
			count++;
		}
		a = a / 2;//��ʵa/2���൱��a�Ķ�����λ�����ƶ�1λ
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d ", count);
	return 0;
}
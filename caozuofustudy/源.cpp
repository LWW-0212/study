#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ�����Ĳ����м���һ
//int main()
//{
//	int a = 6;
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;//��ʵa/2���൱��a>>1,
//		           //Ҳ���ǲ���������һλ
//	}
//	printf("%d ", count);
//	return 0;
//}���ǲ����㸺��
//�Ľ�����
//int main()
//{
//	int a = -2;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((a>>i) & 1))
//			count++;
//	}
//	printf("%d ", count);
//}
//int main()
//{
//	int a = 10;
//	/*printf("%d\n", a++);*/
//	printf("%d\n", ++a);
//	return 0;
//}
struct nv
{
	char name[20]={0};
	int age=10;
};
int main()
{
	struct nv sao = { "����", 27,};
	printf("%d\n", sao.age);
	printf("%s\n", sao.name);
	//ָ��
	struct nv* ren = &sao;
	printf("%d\n", ren->age);
	printf("%s\n", ren->name);
	return 0;
}
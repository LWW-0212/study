#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct Place
{
	int age;
	char c;
	char ch[20];
}Place;
struct stu
{
	int age;
	char* pa;
	Place cheng;
};
int main()
{
	char arr[] = "hello bit";
	struct stu bingbing = { 27,arr,{17,'w',"wangwang"} };
	printf("%d\n", bingbing.age);//27
	printf("%s\n", bingbing.pa);//hello bit
	printf("%d\n", bingbing.cheng.age);//17
	printf("%c\n", bingbing.cheng.c);//w
	printf("%s\n", bingbing.cheng.ch);//wangwang
}

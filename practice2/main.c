//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
//    int q,w,e,r,t,y;
//    scanf("%d%d%d%d%d%d",&q,&w,&e,&r,&t,&y);
//    int year=r-q;
//    if((t<w))
//        printf("%d\n",year-1);
//    else if((t=w)&&(y<e))////ÔÙ¿ÓÁË£¡£¡£¡£¡t==w!
//        printf("%d\n",year-1);
//    else
//        printf("%d\n",year);
//    return 0;
//}

//int main()
//{
//    double l,w,h,a;
//    scanf("%f%f%f%f",&l,&w,&h,&a);
//    if((l>1.0)||(w>1.0)||(h>1.0)||(a>30)||(l<=0||(w<=0)||(h<=0)))
//    {
//        printf("error\n");
//    }
//    else if(a<10)
//    {
//        printf("%f",a*0.8);
//    }
//    else if((a>=10)&&(a<20))
//        {
//            printf("%f",a*0.75);
//        }
//    else
//    {
//        printf("%f",a*0.7);
//    }
//    return 0;
//}
//int main()
//{
//    int a,b,i,j,d;
//    scanf("%d:%d %d:%d %d",&a,&b,&i,&j,&d);
//    int result=i*60-a*60+j-b+20*d;
//    printf("%d\n",result);
//    return 0;
//}

//int main()
//{
//    int h,m;
//    scanf("%d%d",&h,&m);
//    float angel=5.5*m-30*h;
//    if(angel>0)
//    {
//        if(angel>180)
//         {
//        printf("At %d:%02d the angle is %.1f degrees.",h,m,360-angel);
//         }
//    else
//        printf("At %d:%02d the angle is %.1f degrees.",h,m,angel);
//    }
//    if(angel<0)
//    {
//        angel=(-angel);
//         if(angel>180)
//         {
//        printf("At %d:%02d the angle is %.1f degrees.",h,m,360-angel);
//         }
//         else
//        printf("At %d:%02d the angle is %.1f degrees.",h,m,angel);
//    }
//    if(angel==0.0)
//    printf("At %d:%02d the angle is %.1f degrees.",h,m,angel);
//    return 0;
//}
//int main()
//{
//    int m;
//    scanf("%d",&m);
//    printf("%02d",m);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int a=0;
//    scanf("%d",&a);
//    int count=0;
//    int b=a;
//    //判断是否符合要求
//    if((a>=100000)||(a<=0))
//    {
//        printf("Invalid input\n");
//    }
//    //输出位数
//
//    else
//    {
//        while(b)
//    {
//        b=b/10;
//        count++;
//    }
//    printf("%d\n",count);
//    //逆序打印
//    while(a)
//    {
//        printf("%d",a%10);
//        a=a/10;
//    }
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int IS_LEAP_YEAR(int year);
//int main()
//{
//    int year=0;
//    scanf("%d",&year);
//    int a=IS_LEAP_YEAR(year);
//    if(1==a)
//        printf("yes\n");
//    else
//        printf("no\n");
//    return  0;
//}
//int IS_LEAP_YEAR(int year)
//{
//    if((((year%4)==0)&&((year%100)!=0))||((year%400)==0))
//    return 1;
//    else
//        return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int a=0;
//    scanf("%d",&a);
//
//    if((a>999)&&(a<10000))
//    {
//        int sum=0;
//        while(a)
//        {
//            sum=sum+(a%10);
//            a=a/10;//do not forget!!!
//        }
//        if((sum%2)==0)
//            printf("yes\n");
//        else
//            printf("no\n");
//    }
//    else
//        printf("Invalid data\n");
//}
//判断三角形的形状
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a==b)&&(b==c)&&(a!=0))
        printf("equilateral triangle");
    else if((a+b<=c)||(a+c<=b)||(b+c<=a))
        printf("non-triangle");
    else if(((a==b)||(b==c)||(a==c))&&((a+b>=c)||(a+c>=b)||(b+c>=a)))
        printf("isoceles triangle");
    else
        printf("triangle");
    return 0;
}

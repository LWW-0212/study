#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    printf(" * * * *\n");
//    printf("  * * *\n");
//    printf("   * *\n");
//    printf("    *\n");
//    return 0;
//}

//int main()
//{
//    int a,b;
//    scanf("%d %d",&a,&b);
//    printf("%d %d",a,b);
//    return 0;
//}


//int main()
//{
//    int a=5;
//    printf("%d\n",a);
//    return 0;
//}
//
//int main()
//{
//    float a=0;
//    float b=0;
//    scanf("%f %f",&a,&b);
//    printf("%f\n",a+b);
//    return 0;
//}


//int main()
//{
//    int a=0;
//    int  b=0;
//    scanf("%d%d",&a,&b);
//    printf("%d,%d",a,b);
//    getchar();
//    scanf("%d",&b);
//    printf("%d\n",b);
//    return 0;
////}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int h;
//    int f;
//    scanf("%d %d",&h,&f);
//    int b=2*h-f/2;
//    int a=f/2-h;
//    if((a%1!=0)||(b%1!=0))
//    printf("нч╫Б");
//    else
//    printf("rabbit=%d,chicken=%d",a,b);
//    return 0;
//}

//int main()
//{
//    int q,w,e,r,t;
//    scanf("%d%d%d%d%d",q,w,e,r,t);
//    int time=(e-q)*60+(r-q)+20*t;
//    printf("%d/n",time);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,b,h,m;
//    scanf("%d%d",&a,&b);
//    int a1=a/100;
//    int b1=b/100;
//    int a2=a%100;
//    int b2=b%100;
//    if((b2-a2)<0)
//    {
//         h=b1-a1-1;
//         m=b2-a2+60;
//    }
//    else
//    {
//         h=b1-a1;
//         m=b2-a2;
//    }
//    printf("%02d:%02d\n",h,m);
//    return 0;
//}


include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A==B)
            printf("C");
    if(B==C)
            printf("A");
    if(A==C)
            printf("B");
    return 0;
}

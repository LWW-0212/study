#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//int main()
//{
//    char arr1[]="##################";
//    char arr2[]="hello";
//    my_strcpy(arr1,NULL);
//    printf("%s\n",arr1);
//    return 0;
//}
//
//void my_strcpy(char* dest,char* sourse)
//{
//    assert(dest!=NULL);
//    assert(sourse!=NULL);
//   while(*dest++=*sourse++)
//   {
//     ;
//   }
//}
 int my_strlen(char* arr);
 int main()
 {
     const char arr[]="l love you!";
     int len =my_strlen(arr);
     printf("%d\n",len);
     return 0;
 }
 int my_strlen( char* arr)//����const
 {
     int count =0;
     assert(arr!=NULL);//��һ������
     while(*arr++!=0)
     {
         count++;
     }
     return count;
 }

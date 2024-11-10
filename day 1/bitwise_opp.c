#include<stdio.h>
int main()
{
    int a=10;//1010
    int b=3;//0011
    int c=b&a;//0000
    printf("the value of c is:%d\n",c);
    printf("%d\n",sizeof(c));
    int d=a++;
    printf("%d\n",d);
    int e=++a;
     printf("%d\n",e);
     int f=a++ + ++b;//6
      printf("%d\n",f);
    int g=a++ + ++b;//
    printf("%d\n",g);
    return 0;


}
#include<stdio.h>
int main ()
{
    int a=20;
    int b=60;
    int*const ptr=&b;
    *ptr=40;
    printf("the value of the ptr is %d",*ptr);
    return 0;

}
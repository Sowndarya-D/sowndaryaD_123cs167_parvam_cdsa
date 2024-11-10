#include<stdio.h>
int main ()
{
    int a=787855458;
    int *ptr;
    char d='s';
    char *ptr3=&d;
    ptr=&a;
    printf("the value of a is %d\n ",a);
    printf("the address of a is %u\n ",&a);
    printf("the ptr is %u\n ",ptr);
    printf("the value of ptr is %d \n ",ptr3);
    printf("the size of ptr is %d\n ",sizeof(ptr));
     printf("the size of ptr is %d\n ",sizeof(ptr3));
    return 0;
}
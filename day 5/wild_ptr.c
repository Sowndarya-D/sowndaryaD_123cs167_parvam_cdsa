#include<stdio.h>
int main()
{
    int*ptr;
    int *a;
    int num=120;
    a=&num;
    printf("%u\n",a);
    printf("%u\n",ptr);
    printf("%d",*a);
    
    return 0;
    

}
#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);
   
    if(a>0)
    {
        printf("the value of a is positive");

    
    }
    else if(a==0)
    {
        printf("enter value of a greater than 0");
           }

    else
    {
        printf("the value of a is negative");
    }
    return 0;
}
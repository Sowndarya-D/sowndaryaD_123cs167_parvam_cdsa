#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("enter the value of c:\n");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("the value of A is the largest value");
    }
    else if(b>a && b>c)
    {
        printf("the value of b is the largest value ");
    }
    else
    {
        printf("the value of c is the largest value ");
    }
    return 0;
}
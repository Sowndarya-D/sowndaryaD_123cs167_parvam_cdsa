#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);
   
    if(a%2==0)
    {
        printf("A is even ");

    
    }
    // //else if(a=0)
    // {
    //     printf("enter value of a greater than 0");
    //        }

    else
    {
        printf("A is odd number");
    }
    return 0;
}
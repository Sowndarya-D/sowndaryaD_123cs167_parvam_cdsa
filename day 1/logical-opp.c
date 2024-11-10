#include<stdio.h>
int main()
{
    int a=4;
    int b=3;
    if((a>5)&&(b>5))
    {
        printf("a is great than 5");
    }
    
    else if((a>5)||(b>5))
    {
        printf("a is greater than 5");
    }
    else{
        printf("a is less than 5\n");
    }
    
    int valid=1;
    int invalid=!valid;//!1=0
    printf("%d\n",valid);
    printf("%d\n",invalid);
    return 0;

}
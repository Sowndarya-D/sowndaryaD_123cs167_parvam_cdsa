#include<stdio.h>
int main()
{
    //implicit;
    int a=10;
    float b=a;
    printf("%.3f\n",b);//10.0;
    //explicit ;
    float c=23.55;
    int d=c;  //b=23
    printf("%d",d);
    return 0;

}

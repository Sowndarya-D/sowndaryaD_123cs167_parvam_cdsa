#include<stdio.h>
int main ()
{
    int d=40;
    int a1=34;
    float a=34.0;
    int sum=d+a;
    printf("%d\n",sum);
    int diff=d-a;
    printf("%d\n",diff);
    float prod=d*a1;
    printf("%.3f\n",prod);
    float div=d/a;
    printf("%.3f",div);
    int mod= a1%d;
    printf("%d",mod);

    return 0;
}
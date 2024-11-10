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
    d=d+10;
    d=20;
    a1=30;
    d+=a1;//d=d+a1=>d=20+30=50
    printf("%d\n",d);

    return 0;
}
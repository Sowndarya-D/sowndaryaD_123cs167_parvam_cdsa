#include<stdio.h>
int main()
{
    int sum=0;
    int s[]={2,4,6,7,1};
    for(int i=0;i<5;i++)
    {
        printf("%d\n",s[i]+5);
        sum+=s[i];
    }
    printf("sum is :%d",sum);
        return 0;
}
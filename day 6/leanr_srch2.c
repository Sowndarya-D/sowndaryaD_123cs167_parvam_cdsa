#include<stdio.h>
int main()
{
    int a[]={1,2,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int target ;
    printf("enter the key value to be search");
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        if(target==a[i])
        {
            printf("the element is present at index %d\n",i);
            return 0;

    }
    }
    printf("the element is not present!");
    return 0;
}
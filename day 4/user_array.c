#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of elements:\n");
    scanf("%d",&n);
    int arr[5];
    printf("enter 5 elements");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
      
    }
    printf("the array elements are------\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
        return 0;
}  
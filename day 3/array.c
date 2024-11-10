#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    arr[3]=6;//changes at last;
    for(int i=0;i<5;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;

}
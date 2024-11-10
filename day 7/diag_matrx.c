#include<stdio.h>
int main()
{
    
    int A[3][3]={{1,3,4},
                {3,6,7},
                {4,7,9}};
    //  printf("enter the elements for matrix B\n :",B);
    //  scanf("%d",&B);
    //printf("the diagonal elements:%d");

    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
           if(i==j)
           {
          printf("the diagonal elements are :%d\n",A[i][j]);
           
           }
        }
    }
    
    return 0;
}
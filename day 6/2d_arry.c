#include<stdio.h>
int main()
{
    int m,n;
    int sum,A,B;
     printf("enter the no of rows & colounms ",m,n);
     scanf("%d%d",&m,&n);
     printf("enter the no of elements for A\n :",A);
     scanf("%d",&A);
     printf("enter the elements for matrix B\n :",B);
     scanf("%d",&B);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           
            scanf("%d",&a[i][j]);
        }
    }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
    
     printf("\n");
    }
    sum=  A+B;
    printf("the sum of the two matrix is:"+A" "+B" ");
   
    return 0;
}
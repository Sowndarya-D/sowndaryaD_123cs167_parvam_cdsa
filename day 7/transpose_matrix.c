#include<stdio.h>
int main()
{
    int A[3][3]={{1,3,4},
                {8,6,7},
                {4,7,9}};
    printf(" the transepose matrix is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        
          printf("%d ",A[j][i]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[]={64,32,12,13,18,79};
    int n =sizeof(arr);
    int i,j,temp;
    printf("Original array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

for (i = 0; i <n-1; i++)
{
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp =arr[j];
            arr[j]=arr[j+1];
        }


        }
    }
    printf("sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}

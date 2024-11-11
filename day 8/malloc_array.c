#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int* array=(int*)malloc(n* sizeof(int));
    if(array==NULL){
        printf("Memory Allocation failed\n");
        return 1;
    }
     printf(" enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf(" You entered :\n");
    for(int i=0;i<n;i++){
        printf("%d",array[i]);
    }
    printf("\n");

    free(array);
return 0;
}
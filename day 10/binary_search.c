#include<stdio.h>
int binarySearch(int arr[],int size,int target)
{
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if (arr[mid]<target)
        {
           left = mid +1;

        }
        else{
            right = mid - 1;
        }
        
    }
    printf("element not found\n");
    return -1;
}
int main()
{
    int arr[]={1,3,4,7,8,9};
    int target = 4;
    int result = binarySearch(arr,sizeof(arr)/sizeof(arr[0]),target);
    printf("Element found at index: %d\n",result);
    printf("hi savita,how are you\n");
    printf("hi sneha,how are you\n");
    return 0;
    

}
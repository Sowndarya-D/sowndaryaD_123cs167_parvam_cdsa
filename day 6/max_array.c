#include <stdio.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Determine the number of elements in the array
    int max = arr[0]; // Assume the first element is the maximum initially
    
    // Iterate through the array to find the maximum value
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }

    // Output the result
    printf("The maximum element in the array is %d\n", max);
    return 0;
}

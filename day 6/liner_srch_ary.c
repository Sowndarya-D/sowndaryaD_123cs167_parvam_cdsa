#include <stdio.h>
#include <string.h>

int main() {
    char *arr[] = {"apple", "savita", "cherry", "date"};
    char target[100];
    int found = -1;  
    printf("Enter string to search: ");
    scanf("%s", target);

    for (int i = 0; i < 4; i++) {
        if (strcmp(arr[i], target) == 0) {
            found = i;  
            break;
        }
    }

    if (found != -1)
        printf("String found at index %d.\n", found);
    else
        printf("String not found.\n");

    return 0;
}

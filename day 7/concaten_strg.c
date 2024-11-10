#include <stdio.h>
int main() { 
    char str1[] = "bye😙. ";
    char str2[] = "World!,see you soon";
    int i = 0;
    char result[100]; 
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    int j = 0;
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';

    
    printf("Resulting string: %s\n", result);
    return 0;
}

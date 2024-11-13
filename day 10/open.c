#include<stdio.h>
int main()
{
    FILE* file=fopen("open.c","r");
    if(file == NULL){
        printf("ERROR! opening file.\n");
        return 1;
    }
    printf("file opened sucessfully.\n");
    fclose(file);
    return 0;

}
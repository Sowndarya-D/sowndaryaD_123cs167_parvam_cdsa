#include<stdio.h>
int main()
{
    FILE* file=fopen("example.txt","w");
    if(file == NULL){
        printf("ERROR! Creating file.\n");
        return 1;
    }
    printf("file created sucessfully.\n");
    fclose(file);
    return 0;

}
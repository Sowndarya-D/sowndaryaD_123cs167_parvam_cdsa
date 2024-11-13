#include<stdio.h>
int main()
{
    FILE* file = fopen("hello.java","W");
    if(file == NULL){
        perror("ERROR!");
        return 1;
    }
    fprintf(file,"this is the file line.\n");
    fprintf(file,"writing the file will override its contents.\n");
    fclose(file);
    printf("File written successfully in write mode.\n");
    return 0;

}
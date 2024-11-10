#include<stdio.h>
int main(){
    char str[20];
    printf("enter the name");
   // scanf("%s",name); 
   fgets(str,sizeof(str),stdin);
   str[strcspn(str,"\n")]=0;// cspn is the fun, remove last char;
    printf("the name is:%s",str);
    int length=strlen(str);
    printf("%d is the length of string  ",length);

    return 0;
}
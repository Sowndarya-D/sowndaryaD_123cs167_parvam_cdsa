#include <stdio.h>
#include<string.h>
int main() { 
    char str[10];
    int start=0;
  
    char temp;
    char org[20];
    
    printf("enter the string:");
    scanf("%s",str);
      int end=strlen(str) - 1;
    strcpy(org,str);
    while (start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;

    }
    printf("reversed string : %s\n",str);
    if(strcmp(org,str)==0){
        printf("yes it is polindrome:");

    }
    else{
        printf("no! it is not polindrome:");
    }
    return 0;
}

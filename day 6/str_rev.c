#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hello";
      char c[50]="world";
      char b[50];

      strcpy(b,a);
      printf(" the string value of b:%s\n",b);
      printf("%d",strlen(b));
      printf("the length of cpy str is %d\n");
      strcat(b,c);
      printf(" concatinated str2 %s\n",b);
      int res=strcmp(a,a);
      printf("%d\n",res);
      if(res==0){
        printf("both strings are equal");
    
      }
      else if(res==-1){
        printf("string1 lesser than string2"); 
      }
      else{
        printf("string1 greater than string2"); 

      }
      printf("%s ",strrev(c) );
      return 0;
}
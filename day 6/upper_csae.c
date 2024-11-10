#include<stdio.h>
#include<string.h>
#include<ctype.h>
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
      int res=strcmp(b,a);
      printf("%d\n",res);
      
      printf("%s\n",strrev(c) );
      for(int i=0;a[i]!='\0';i++)
      {
        a[i]=towlower(a[i]);
        printf("%s ",a);
      }
      return 0;
}
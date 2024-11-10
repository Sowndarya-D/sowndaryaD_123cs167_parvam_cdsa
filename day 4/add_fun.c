#include<stdio.h>
void add(int x ,int y){
    int c=x+y;
    printf("%d",c); 
       }
    int main(){
    int a,b;
   printf("enter the values a and b:\n");
   scanf("%d %d",&a,&b);
   add(a,b);
   return 0;
}

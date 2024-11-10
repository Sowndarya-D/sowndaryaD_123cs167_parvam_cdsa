#include<stdio.h>
int add(int x ,int y){
    int A=x*y;
    return A;
    }
    int main(){
    int a=10,b=20;
    int area=add(a,b);
    printf("%d",area);
    return 0;
}
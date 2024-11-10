#include<stdio.h>
int main()
{
    int a=10;
    printf("demonstrating escape sequences:\\ \n");
    //newline
    printf("the sequence of the \\\\ first line\\\\\\ \\ ""the sequence of\\\\"" second line\n");
    printf("the cost of newspaper\t is:$\n");

//    ( %d(decimal),%o(octal),%x(hexadecimal lwr_case),%X(hexadecimal upr_case));
    printf(" %d ",a);
    return 0;
}
#include<stdio.h>
int main()
{
    int num=3;
    switch(num)
    {
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three\n");
        break;
        case 4:
        printf("four");
        break;
        default:
        printf("invalid number");
    }
    int month=8;
    switch(month)
    {
        case 1:
        printf("january");
        break;
        case 2:
        printf("february");
        break;
        case 3:
        printf("march");
        break;
        case 4:
        printf("april");
        break;
        case 5:
        printf("may");
        break;
        case 6:
        printf("june");
        break;
        case 7:
        printf("july");
        break;
        case 8:
        printf("august");
        break;
        case 9:
        printf("september");
        break;
        case 10:
        printf("october");
        break;
        case 11:
        printf("november");
        break;
        case 12:
        printf("december");
        break;
        default:
        printf("invalid month!!");

    }
    return 0;
    }
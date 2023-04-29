#include<stdio.h>
int main()
{
    char c;
    printf("Enter an day no: ");
    scanf("%c",&c);
    switch(c)
    {
        case '1':
        printf("It is sunday");
        break;
        case '2':
        printf("It is monday");
        break;
        default:
        printf("It is not a day no");
    }
    return 0;
}
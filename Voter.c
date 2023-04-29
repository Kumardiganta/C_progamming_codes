#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a;
    printf("enter an age: ");
    scanf("%d", &a);
    if (a>100)
    printf("please enter a valid age");
    else if(a<13)
    printf("you are a child");
    else if (a>13 && a<18)
    printf("you are a teenager");
    else if (a>=18 && a<=100)
    printf("you are eligible to vote");
    else
    printf("you are not eligible to vote");
    return 0;
}
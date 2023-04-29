#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a,b;
    char op;
    printf("Enter desired operation(+,-,*,/): \n");
    scanf("%s",&op);
    printf("Enter two numbers (a,b): ");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case '+':
        printf("Sum is: %d\n",a+b);
        break;
        case '-':
        if (a>=b){
        printf("Subtraction is: %d\n",a-b);}
        else{
        printf("Subtraction is: %d\n",b-a);}
        break;
        case '*':
        printf("Multiplication is: %d\n",a*b);
        break;
        case '/':
        if (a>=b)
        printf("Division is: %d\n",a/b);
        else
        printf("Division is: %d\n",b/a);
        default:
        printf("Please enter a valid operation!\n");
    }
}
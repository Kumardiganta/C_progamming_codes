#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int main()
{
    system("cls");
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum is: %d",c);
}
int sum(int x, int y)
{
    int s;
    s=x+y;
return(s);
}
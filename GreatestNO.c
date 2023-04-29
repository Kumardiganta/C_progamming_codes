#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    printf("The greatest no is%d",a);
    else if (b>=a && b>=c)
    printf("The greatest no is %d",b);
    else
    printf("The greatest no is %d",c);
return 0;
}

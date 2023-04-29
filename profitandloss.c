#include<stdio.h>
main()
{
    float s,c,amt;
    printf("enter the selling price: ");
    scanf("%f",&s);
    printf("enter the cost price: ");
    scanf("%f",&c);
    if(s>c)
    {
        amt=s-c;
        printf("profit: %f rupees",amt);
    }
    else if(c>s)
    {
        amt=c-s;
        printf("loss: %f rupees",amt);
    }
    else
    {
        printf("no profit or loss");
    }
return 0; }
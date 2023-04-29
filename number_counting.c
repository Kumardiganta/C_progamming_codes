#include<stdio.h>
int main()
{
    int count = 0;
    for (int  i = 1; i <= 100; i++)
    {
        int num = i;
        while (num>0)
        {
            if (num % 10 == 5)
            {
                count++;
            }
            num /= 10; 
            // num = num/10
        }
        
    }
    printf("the number 5 appears %d times in the range of 1 to 100.",count);
    return 0;
}
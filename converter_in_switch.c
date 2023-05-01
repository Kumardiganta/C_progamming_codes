#include<stdio.h>
#include<stdlib.h>
int main()
{
  system("cls");
  float value,F,C;
  char choice;
  printf("Welcome to Converter!\n");
  printf("Enter Your Choice: \nA: Celcius to Farenheit\nB: Farenheit to Celcius\n");
  scanf("%c",&choice);
  printf("Enter the Value: ");
  scanf("%f",&value);
  switch (choice)
  {
  case 'A':
    F = (value*9)/5+32;
    printf("The Farenheit Value is: %.2fF",F);
    break;
  case 'B':
    C = (value-32)*5/9;
    printf("The Celcius Value is: %.2fC",C);
    break;
  default:
    printf("Invalid Input!");
    break;
  }
  return 0;
}
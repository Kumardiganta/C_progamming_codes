#include<stdio.h>
struct student
{
  char name[50];
  int roll;
  float marks;
};
int main()
{
    struct student s;
    printf("Enter Student Information:\n");
    printf("Enter Student Name: \n");
    scanf("%s",&s.name);
    printf("Enter Student Roll no.: ");
    scanf("%d",&s.roll);
    printf("Enter Student Marks: ");
    scanf("%f",&s.marks);
    printf("Student Information\n");
    printf("Name: %s\n",s.name);
    printf("Roll no: %d\n",s.roll);
    printf("Marks: %.2f\n",s.marks);
    return 0;
}

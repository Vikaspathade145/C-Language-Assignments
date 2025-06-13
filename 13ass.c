#include<stdio.h>
int main()
{
    float sal,tax=0;
    printf("Enter a sal");
    scanf("%f",&sal);
    if(sal<15000)
    tax=0;
else 
      printf("income tax: %f",tax);
  return 0;
} 

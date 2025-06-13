#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("enter a number");
    scanf("%d",&sum);
    for( i =1; i <= 10; i++)
    if(i % 2 == 0)
    sum +=i;
printf("sum = %d\n", sum);
return 0;
}
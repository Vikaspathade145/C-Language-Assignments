#include<stdio.h>
int main()
{
    int sum=0;
    printf("enter a number");
    scanf("%d",&sum);
    for(int i=1;i<=5;i++)
    sum+=i;
printf("sum = %d\n",sum);
return  0;

}
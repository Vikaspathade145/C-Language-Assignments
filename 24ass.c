#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("enter a number");
    scanf("%d",&sum);
    for( i=1;i<=5;i++)
    sum+=i;
printf("sum = %d\n",sum);
return  0;

}
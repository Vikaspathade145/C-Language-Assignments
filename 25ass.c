#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("enter a number");
    scanf("%d", &sum);
    for( i=100;i<=150;i++)
    sum+=i;
printf("sum %d\n",sum);
return 0;

}
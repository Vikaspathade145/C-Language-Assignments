#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    printf("enter a no");
    scanf("%d%d", &x,&y);
    for( i=x;i<=y;i++)
    sum +=i;
printf("sum = %d\n",sum);
return 0;
}
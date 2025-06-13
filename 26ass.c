#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("enter a no");
    scanf("%d%d", &x,&y);
    for(int i=x;i<=y;i++)
    sum +=i;
printf("sum = %d\n",sum);
return 0;
}
#include<stdio.h>
int main()
{
    int i;
    printf("enter a number");
    scanf("%d",&i);
    for(i=1; i<=10; i++)
    if(i % 2 == 0)
    printf("%d\n",i);
return 0;
}

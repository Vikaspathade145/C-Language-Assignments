#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    if(n % 5 == 0)
        if(n % 7 == 0)
        printf("Divisible");
    else
    printf("Not Divisible");

    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b) ? (a<c) : (b>c);
    printf("maximum=%d\n", max);

    min=(a<b) ? (a<c) : (b<c);
    printf("minimum=%d\n", min);

    return 0;
}
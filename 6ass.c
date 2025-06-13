#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter 3 number");
    scanf("%d%d%d",&n1,&n2,n3);
    if(n1>n2 && n2<n1)
    printf("number is between");
else
   printf("number is not between");
return 0;
}
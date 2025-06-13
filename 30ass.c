#include<stdio.h>
int main()
{
 int x,y,i;
 printf("enter a number");
 scanf("%d%d",&x,&y);
 for( i=x;i<=y; i++)
 if(i % 2 == 0)
 printf("%d\n",i);
return 0;   
}
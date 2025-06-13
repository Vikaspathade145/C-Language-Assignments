#include<stdio.h>
int main()
{
    int h,m,s;
    printf("enter time (hh mm ss) :");
    scanf("%d%d%d",&h,&m,&s);

if(h>=0 && h<24 && m>=0 && m<60 && s>=0 && s<60)
  
     printf("Valid Time");
else
     printf("Invalid Time");
    return 0;
}
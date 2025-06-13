#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
    printf("Digit");
else if(ch>=65 && ch<=90)
      printf("Uppercase");
else if(ch>=97 && ch<=122)
      printf("Lowercase");
else
      printf("Special");
  return 0;
}
#include <stdio.h>

int main()
{
  int num;

  printf(" Enter any num \n");
  scanf("%d",&num);
 
 (num > 0)? printf(" It is Positive \n"):
    (num < 0)? printf(" It is Negative \n"):printf(" It is zero \n");

  return 0;
}
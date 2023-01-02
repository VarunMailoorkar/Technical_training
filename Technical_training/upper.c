#include <stdio.h>
#include<ctype.h>

int main()
{
  char Ch;
 
  printf("\n Please Enter any alphabet\n");
  scanf("%c", &Ch);

  if ( isupper(Ch) )
   {  
     printf ("\n Entered character is uppercase alphabet");
   }
  else
   {
     printf("\n Entered character is Not uppercase alphabet");
   }  
}
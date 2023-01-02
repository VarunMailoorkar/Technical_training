#include <stdio.h>

int main()
{
	char	str[100];
	int		i;

	printf("Enter a string to change into tOGGLE cASE : ");
	gets(str);

	
	   if it is upper case, change to lower case
	   if it is lower case, change into upper case*/
	
	for(i=0;str[i]!='\0';i++)
    {
		if(str[i]>='A' && str[i]<='Z') 
			str[i]=str[i]+32;	
		else if(str[i]>='a' && str[i]<='z') 
			str[i]=str[i]-32;	
	}

	printf("The given String in tOGGLE cASE is: %s",str);
	return 0;
}
#include <stdio.h>
float kmph;              
float miph;             
char  line_text[50];     

int main()
{
	printf("Input kilometers per hour: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%f", &kmph);

	miph = (kmph * 0.6213712);
	printf("%f miles per hour\n", miph);

	return(0);
}
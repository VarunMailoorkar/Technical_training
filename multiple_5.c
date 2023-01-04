#include <stdio.h>


void isMultipleOf5(int number)
{
	if ((number % 5) == 0)
	{
		printf(" Number %d is multiple of 5\n", number);
	}
	else
	{
		printf(" Number %d is not multiple of 5\n", number);
	}
}
int main()
{
	
	isMultipleOf5(-5);
	isMultipleOf5(15);
	isMultipleOf5(32);
	isMultipleOf5(20);
	return 0;
}
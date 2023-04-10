#include <cs50.h>
#include <stdio.h>

int main(void)
{
	string name = get_string("What is your name? ");
	printf("hello, %s\n", name);
	int number = get_int("Please enter your favorite number: ");
	if(number < 50)
	{	
		printf("Your favorite number is less than 50...\n");
	}
	else
	{
		printf("Your favorite number is greater than or equal to 50!\n");
	}
	return 0;
}


#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	char mynum[] = "0123456789";
	int i;

	for (i = 0; i <= 10; i++)
	{
		if (i == 10)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(mynum[i]);
		}
	}
}

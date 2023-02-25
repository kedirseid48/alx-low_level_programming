#include "main.h"
/**
 * print_line - print numbers from 0 to 9
 * @n: a character argument
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

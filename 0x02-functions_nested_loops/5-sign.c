#include "main.h"
/**
 * print_sign - check character
 * Return: 0,1,-1
 * @n: a character argument
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('+');
		return (0);
	}
	else
	{
		return (-1);
	}
}

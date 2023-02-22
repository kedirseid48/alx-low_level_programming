#include "main.h"
/**
 * print_last_digit - check character
 * Return: b
 * @x: a character argument
 */
int print_last_digit(int x)
{
	if (x >= 0)
	{
		x = x % 10;
		_putchar(x + '0');
	}
	else if (x == -2147483648)
	{
		x = (-1 * x) % 10;
	}
	else
	{
		x = -x % 10;
		_putchar(x + '0');
	}
	return (x);
}

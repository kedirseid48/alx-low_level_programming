#include "main.h"
/**
 * _isdigit - check character
 * Return: 0,1
 * @c: a character argument
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

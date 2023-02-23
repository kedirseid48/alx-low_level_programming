#include "main.h"
/**
 * _isupper - check character
 * Return: 0,1
 * @c: a character argument
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

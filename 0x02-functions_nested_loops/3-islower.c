#include "main.h"
/**
 * _islower - check character
 * Return: 0,1
 * @c: a character argument
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

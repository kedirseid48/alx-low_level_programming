#include "main.h"
/**
 * _isalpha - check character
 * Return: 0,1
 * @c: a character argument
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

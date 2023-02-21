#include <stdio.h>
/**
 * main _putchar
 *
 * Return: 0
 *
 */
int main(void)
{
	char mytext[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
	putchar(mytext[i]);
	}
	putchar('\n');
	return (0);
}

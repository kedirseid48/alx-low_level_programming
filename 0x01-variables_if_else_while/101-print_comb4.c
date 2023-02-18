#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = '0';
	int i;
	int j;

	while (c <= '9')
	{
		i = c + 1;
		while (i <= '9')
		{
			j = i + 1;
			while(j <= '9')
			{
				putchar(c);
				putchar(i);
				putchar(j);
				if (c != '7' || (c == '7' && i != '8'))
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}

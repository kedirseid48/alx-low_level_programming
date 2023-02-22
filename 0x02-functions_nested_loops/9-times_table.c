#include "main.h"
/**
 * times_table - multiple times table
 */
void times_table(void)
{
	int a, b, pro, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			pro = a * b;
			if (pro >= 10)
			{
				c = pro % 10;
				d = pro / 10;
				_putchar(d + '0');
				_putchar(c + '0');
			}
			else if (pro < 10)
			{
				_putchar(pro + '0');
			}
			if ((b != 9) && (a * (b + 1) >= 10))
			{
				_putchar(',');
				_putchar(' ');
			}
			else if ((b != 9) && (a * (b + 1) < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

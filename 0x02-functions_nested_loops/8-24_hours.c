#include "main.h"
/**
 * jack_bauer - every minuit
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for(a = 0; a <= 2; a++)
	{
		if (a == 1 || a == 0)
		{
			for (b = 0; b <= 9; b++)
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (b = 0; b <= 3; b++)
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{       
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}	
	}
}

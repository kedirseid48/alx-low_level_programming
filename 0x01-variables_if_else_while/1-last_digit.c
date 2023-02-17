#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	ld = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", i, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is 0 and is 0", i);
	}
	else if (ld < 6)
	{
		printf("Last digit of %d is %d and is less than 6\n", i, ld);
	}
	return (0);
}

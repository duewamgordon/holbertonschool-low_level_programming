#include "main.h"

/**
 * more_numbers - Print 10 x the numbers from 0 to 14, and a new line
 *: Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
		if (j >= 10)

		_putchar('1');
		_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

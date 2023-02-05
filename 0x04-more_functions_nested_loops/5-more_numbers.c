#include "main.h"

/**
 * void_more_numbers - Print 10 x the numbers from 0 to 14, and a new line
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 14; j++)
	{
		for (i = 0; i <= 14; i++)
		{
		_putchar(i);
		}	
		_putchar('\n');
	}
}

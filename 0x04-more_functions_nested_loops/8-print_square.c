#include "main.h"

/**
 * print_square - Print a square, followed by a new line
 * @size - size of the square
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

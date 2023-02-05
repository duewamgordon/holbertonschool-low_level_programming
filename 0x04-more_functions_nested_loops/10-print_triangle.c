#include "main.h"

/**
 * print_triangle - Print a triangle followed by a new line
 * @size: size of the triangle
 * Return: void
 */

void pirnt_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			j = 0;
			while (j < 0)
			{
				_putchar('$');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
		else
			_putchar('\n');
}


#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: the number of Xs the character is printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
	while (i < n)
	{
	_putchar('_');
	i++;
	}
	)
	_putchar('\n');
	}
}

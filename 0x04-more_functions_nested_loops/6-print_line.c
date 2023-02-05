#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: the number of Xs the character is printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}

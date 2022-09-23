#include "main.h"
/**
 * print_sign - Print the sign of a number
 *
 * @n: Then integer to check
 * Return: 1 print + if n is > zero, 0 & print 0 if n = 0, -1 & print - if n is < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar (48);
		return (0);
	}
}

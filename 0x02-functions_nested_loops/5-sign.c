#include "main.h"
/**
 * print_sign - Print the sign of a number
 *
 * @n: Then integer to check
 * Return: 1 and print + if n is > zero , return 0 and print 0 if n = zero, return -1 and print - if n is < zero
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

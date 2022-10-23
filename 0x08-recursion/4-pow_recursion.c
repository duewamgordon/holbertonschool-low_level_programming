#include "main.h"

/**
 * _pow_recursion - write a function to return the value of an exponent
 * @x: integer
 * @y: exponent
 *
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}

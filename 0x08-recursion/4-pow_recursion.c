#include "main.h"

/**
 * _pow_recursion - write a function to return the value of an exponent
 * @x: integer
 * @y: exponent
 *
 * Return: value multiplied
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

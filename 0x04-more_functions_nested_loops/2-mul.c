#include "main.h"

/**
 * mul - Write a function that multiplies two integers
 * @a: the first integer to be multiplied
 * @b: the second integer to be multiplied
 * Return: 0
 */

int mul(int a, int b)
{
	if (b == 0)
	return (0);
	if (b > 0)
	return (b + mul(a, b - 1));
	if (b < 0)
	return (-mul(a, -b));
	else
	return (0);
}

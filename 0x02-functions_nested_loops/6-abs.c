#include "main.h"
/**
 * _abs - Compute the absolute value of an integer
 * @n: The absolute value
 *
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val  = n * -1;
		return (abs_val);
	}

	return (n);
}

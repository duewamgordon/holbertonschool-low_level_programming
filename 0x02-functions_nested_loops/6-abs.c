#include "main.h"
/**
 * 
 * _abs(int) - Compute the absolute value of an integer
 * @n: The absolute value
 *
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val  = n  (-1) * n;
		return (abs_val);
	}

	return (n);
}

#include "main.h"

/**
 * _abs - Write a function that computes the abs value of an integer
 * @c: Value of the integer
 * Return: Absolute value
 **/

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

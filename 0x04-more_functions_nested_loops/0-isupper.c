#include "main.h"

/**
 * _isupper - Write a function that checks for an uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase, otherwise returns 0.
 */

int isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}

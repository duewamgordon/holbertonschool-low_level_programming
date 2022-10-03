#include "main.h"

/**
 *_isdigit - Check to see if a character is a digit
 *@c: The digit to be identified
 *
 * Return: 1 if c is a digit, otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

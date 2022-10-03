#include "main.h"

/**
 * _isupper - Check for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

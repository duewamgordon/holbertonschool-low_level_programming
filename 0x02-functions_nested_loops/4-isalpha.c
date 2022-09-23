#include "main.h"

/**
 * _isalpha - Checks for alphabet
 *@c: The character to be checked
 *
 * Return: 1 for alphabet or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	return (0);

}

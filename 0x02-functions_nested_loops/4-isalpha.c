#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character checked
 * Returns: 1 if c is an upper or lowercase letter, else 0
 **/

int _isalpha(int c)
{
	if ((c >= 65 &&c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}	

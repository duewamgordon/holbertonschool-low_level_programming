#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character checked
 * Description: returns 1 if is an upper or lowercase letter
 * Return: 1 or 0
 **/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character
 * @c: The character to be checked
 * Return: 1 if c is lowercase otherwise return 0
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

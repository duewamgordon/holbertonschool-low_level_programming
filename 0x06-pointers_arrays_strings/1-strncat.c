#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: max number of bites used from source
 *
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;

	while (dest[len])
	{
		len++;
	}

	while (j <  n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}

	dest[len + 1] = '\0';

	return (dest);
}

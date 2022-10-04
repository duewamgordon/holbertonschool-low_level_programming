#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenate a string
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: a pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;

	}
	dest[len] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _memcpy - copies bytes from the source to the destination
 * @n: bytes from memory area
 * @src: source destination copied fro
 * @dest: destination bytes copied to
 *
 * Return: a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}

#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; c++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i] = *a;
		*a = aux;
		a--;
	}
}

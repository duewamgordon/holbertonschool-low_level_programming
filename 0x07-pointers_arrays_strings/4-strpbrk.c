#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: locates source string
 * @accept: accepted characters
 *
 * Return: the string starting with the first accepted character found
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;

	}

	return ('\0');
}

#include "main.h"

/**
 * _strchr - find a character in a string
 * @s: string
 * @c: character to find
 *
 * Return: the first occurence of a character or NULL
 */
char *_strchr(char *s, char c)
{

	while (*s !=  '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}

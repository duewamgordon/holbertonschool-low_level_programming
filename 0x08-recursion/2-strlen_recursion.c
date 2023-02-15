#include "main.h"

/*
 * _strlen_recursion - Return the length of a string
 * @s: character
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return;
else
return (1 +_strlen_recursion(s + 1);
}

#include "main.h"

/**
 * _puts_recursion - write a function that prints a string
 * @s: character
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}

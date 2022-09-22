#include "main.h"

/**
 * main - Print lowercase alphabet
 *
 * Return: Always (Success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}

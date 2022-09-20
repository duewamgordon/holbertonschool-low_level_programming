#include "main.h"

/**
 * main- Print lowercase alphabet
 *
 * Return: Always (0)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	putchar('\n');
	return (0);
}

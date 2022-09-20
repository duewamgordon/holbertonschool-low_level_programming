#include "main.h"

/**
 * main- Print lowercase alphabet
 *
 * Return: Always (0)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++);
		putchar(letter);

	putchar('\n');
}

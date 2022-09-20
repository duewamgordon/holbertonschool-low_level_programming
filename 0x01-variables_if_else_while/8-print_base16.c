#include <stdio.h>

/**
 * main - Print the numbers of base 16
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= '9'; c++)
	{
		putchar(c);

	}

	putchar('\n');

	return (0);
}

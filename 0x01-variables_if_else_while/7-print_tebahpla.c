#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints lowercase alhphabet in reverse
 * Return: 0.
 **/

int main(void)

{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	putchar(c);
	putchar('\n');

	return (0);

}

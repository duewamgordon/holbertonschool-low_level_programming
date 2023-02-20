#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: count of arguments
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

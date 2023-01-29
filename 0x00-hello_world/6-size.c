#include <stdio.h>
/**
 * main - print the size of various data types
 * Return: 0.
 **/

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;


	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongintType));

	return (0);
}

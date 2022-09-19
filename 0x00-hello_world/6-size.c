#include <stdio.h>

/**
 * main- Prints a text
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int integerType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(charType));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(integerType));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(longintType));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(longlongintType));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(floatType));

	return (0);
}




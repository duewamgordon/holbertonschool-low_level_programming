#include <stdio.h>

/**
 * main- Prints a text
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char charType;
	int integerType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %1d byte\n", sizeof(charType));
	printf("Size of an int: %1d byte\n", sizeof(integerType));
	printf("Size of a long int: %1d bytes\n", sizeof(longintType));
	printf("Size of long long int: %1d sizeof(longlongintType));
	printf("Size of a float: %1d byte\n" sizeof(floatType));

	return 0;
}




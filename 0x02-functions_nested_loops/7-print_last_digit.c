#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the digit to print
 * Return: the value of the last digit
 */

int print_last_digit(int n)

{
	int i;

	i = n % 10;

	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	Return(i);

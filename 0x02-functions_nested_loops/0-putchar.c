#include <stdio.h>
#include "main.h"

/**
 * main- Write a program that prints putchar
 *
 * Return: Always (Success)
 */
int _putchar(char c)
{
	return (fwrite(1, &c, 1));
}

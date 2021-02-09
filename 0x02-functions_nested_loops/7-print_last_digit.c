#include "holberton.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int d;
	if (n < 0)
		n *= -1;
	d = n % 10;
	_putchar(d + '0');

	return (d);
}


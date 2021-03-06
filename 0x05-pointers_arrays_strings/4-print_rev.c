#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int length =  0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	while (length > 0)
	{
		--s;
		--length;
		_putchar(*s);
	}
	_putchar('\n');
}

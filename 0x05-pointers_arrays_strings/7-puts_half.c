#include "holberton.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int half;

	if (length % 2 != 0)
		half = (length / 2) + 1;
	else
		half = length / 2;

	while (half < length)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}

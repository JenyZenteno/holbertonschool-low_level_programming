#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	while (i <= _strlen(str) - 1)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * _length - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length =  0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

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

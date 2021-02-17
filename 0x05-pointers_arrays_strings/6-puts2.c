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
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	while(i < _strlen(str) - 1)
	{
		_putchar(str[i]);
		i +=2;
	}
	_putchar('\n');
}

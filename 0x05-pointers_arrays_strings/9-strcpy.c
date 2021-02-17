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
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int lenght = _strlen(src);
	while (i <= lenght)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

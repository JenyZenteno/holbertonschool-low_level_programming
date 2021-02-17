#include "holberton.h"
#include "2-strlen.c"

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

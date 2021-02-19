#include "holberton.h"

/**
 * *string_toupper - A funtion that changes
 * all lowercase letters of a string to uppercase
 * @s: lowercase letters taken in
 * Return: uppercase letters
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] = (s[i] - 32);
		i++;
	}
	return (s);
}

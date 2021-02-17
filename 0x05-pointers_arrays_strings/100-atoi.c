#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _atoi - returns the numbers of a string
 * @s: string
 * Return: accumulator
 */

int _atoi(char *s)
{
	int i = 0;
	int accumulator = 0;
	int length = _strlen(s) - 1;
	int initial_possition = 0;
	int final_possition = 0;

	while (i <= length)
	{
		if ((s[i] >= '0' && s[i] <= '9'))
		{
			accumulator = (accumulator * 10) + (s[i] - '0');
			if (initial_possition == 0 && length > 1)
				initial_possition = i;
			final_possition = i;
		}
		if ((final_possition > 0) && !(s[i] >= '0' && s[i] <= '9'))
			break;
		i++;
	}
	if (initial_possition >= 1)
		if ((s[--initial_possition] == '-' && accumulator != 0)
		    && !(s[++final_possition] == ' '))
			accumulator *= -1;
	return (accumulator);
}

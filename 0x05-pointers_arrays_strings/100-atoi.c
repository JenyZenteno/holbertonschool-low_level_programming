#include "holberton.h"
#include "2-strlen.c"

/**
 * _atoi - returns the numbers of a string
 * @s: string
 * Return: accumulator
 */

int _atoi(char *s)
{
	int i = 0;
	int accumulator = '0';
	int length = _strlen(s);
	int initial_possition = 0;
	int final_possition = 0;

	while (i < length)
	{
		if ((s[i] >= 48 && s[i] <= 57))
		{
			accumulator += (s[i] + '0');
			if (initial_possition == 0 && length > 1)
				initial_possition = i;
			final_possition = i;
		}
		if ((final_possition > 0) && !(s[i] >= 48 && s[i] <= 57))
			break;
		i++;
	}

	if (initial_possition > 1)
		if (s[initial_possition - 1] == 45)
			accumulator = '-' + accumulator;
	return (accumulator);
}

#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
       	long a = 0;
	long b = 2;
	long c;

	for (counter = 1; counter < 50; counter++)
	{
		c = a + b;
		printf("%li, ", c);
		a = b;
		b = c;
	}
	c = a + b;
	printf("%li\", c);

	return (0);
}

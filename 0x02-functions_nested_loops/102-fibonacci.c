#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
       	unsigned long a = 0;
	unsigned long b = 2;
	unsigned long c;

	for (counter = 1; counter < 50; counter++)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	c = a + b;
	printf("%lu\n", c);

	return (0);
}

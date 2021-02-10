#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long c = 0;
	unsigned long sum = 0;

	while (c < 400000)
	{
		c = a + b;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}
	printf("%lu\n", sum);

	return (0);
}

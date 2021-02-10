#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	long int a = 1;
	long int b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print unique combinations of 3 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, x;
for (i = 48; i < 56; i++)
{
for (j = 49; j < 57; j++)
{
for (x = 50; x <= 57; x++)
{
if (i < j && j < x)
{
putchar(i);
putchar(j);
putchar(x);
if (i < 55)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

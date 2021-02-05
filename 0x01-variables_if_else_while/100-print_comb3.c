#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print unique combinations of 0-1 unique
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i < 57; i++)
{
for (j = 49; j <= 57; j++)
{
if (j > i)
{
putchar(i);
putchar(j);
if (i < 56)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

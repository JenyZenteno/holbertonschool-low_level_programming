#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print unique combinations of 0-99
 * Return: Always 0 (Success)
 */
int main(void)
{
int d1;
int d2;
int d3;
int d4;
for (d1 = 48; d1 <= 57; d1++)
{
for (d2 = 48; d2 <= 57; d2++)
{
for (d3 = d1 ; d3 <= 57; d3++)
{
for (d4 = d2 + 1; d4 <= 57; d4++)
{
putchar(d1);
putchar(d2);
putchar(32);
putchar(d3);
putchar(d4);
if (!((d1 == 57 && d2 == 56) && (d3 == 57 && d4 == 57)))
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar(10);
return (0);
}

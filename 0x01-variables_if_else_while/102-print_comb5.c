#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print unique combinations of 4 digits
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
for (d2 = 48; d2 <= 56; d2++)
{
d4 = d2 + 1;
for (d3 = d1 ; d3 <= 57; d3++)
{
while (d4 <= 57)
{
putchar(d1);
putchar(d2);
putchar(32);
putchar(d3);
putchar(d4);
if (!(d1 == 57 && d2 == 56))
{
putchar(44);
putchar(32);
}
d4++;
}
d4 = 48;
}
}
}
putchar(10);
return (0);
}

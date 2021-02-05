#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the all digits of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char l;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (l = 'a'; l <= 'f'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}

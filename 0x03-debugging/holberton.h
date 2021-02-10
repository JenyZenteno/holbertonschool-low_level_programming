#ifndef HOLBERTON_H
#define HOLBERTON_H

# include <unistd.h>
# include <stdio.h>

/**
 * positive_or_negative - evaluate if a number is possitive
 * @i: The character to evaluate
 *
 * Return: On success 1
 */
void positive_or_negative(int i);

/**
 * largest_number - prints the largest of 3 integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest
 */
 int largest_number(int a, int b, int c);

/**
 * print_remaining_days - determines how many days left in the year
 * @month: month of the year
 * @day: day of the month
 * @year: year
 * Return: On success 0
 */
void print_remaining_days(int month, int day, int year);

/**
 * convert_day - converts a date to the day of year
 * @month: month of the year
* @day: day of the month
 * Return: On success 0
 */
int convert_day(int month, int day);

#endif /* HOLBERTON_H */

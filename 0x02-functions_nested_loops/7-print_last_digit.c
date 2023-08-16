#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @c: number
 *
 * Return: value of the last digit.
 */
int print_last_digit(int c)
{
	char r;

	r = c > 0 ? c <= 9 ? (c) : (c % 10) :
		-c <= 9 ? (-c) : (-c % 10);
	_putchar(r + '0');
	return (r);
}

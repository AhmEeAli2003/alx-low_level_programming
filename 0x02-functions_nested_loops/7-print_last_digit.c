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

	r = c > 0 ? c <= 9 ? (c + '0') : (c % 10 + '0') :
		-c <= 9 ? (-c + '0') : (-c % 10 + '0');
	_putchar(r);
	return (r);
}

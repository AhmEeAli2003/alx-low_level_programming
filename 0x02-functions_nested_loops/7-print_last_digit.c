#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @c: number
 *
 * Return: value of the last digit.
 */
int print_last_digit(int c)
{
	return ((c <= 9) ? (c) : (c % 10));
}

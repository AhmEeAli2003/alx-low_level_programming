#include "main.h"

/**
 * _islower - check if number is lower
 * @c: letter
 *
 * Return: 1 if c is lowercase.
 * 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122 ? (1) : (0));
}

#include "main.h"

/**
 * _isalpha - check if input is alpha
 * @c: letter
 *
 * Return: 1 if c is lowercase.
 * 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) ? (1) : (0));
}

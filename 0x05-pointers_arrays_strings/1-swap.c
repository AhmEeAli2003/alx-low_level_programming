#include "main.h"

/**
 * swap_int - swap 2 integers
 * @a: first number.
 * @b: second number.
 *
 * Return: Always void.
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

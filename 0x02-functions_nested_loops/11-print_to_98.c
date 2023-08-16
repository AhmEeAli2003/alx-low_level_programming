#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  print all natural numbers from n to 98,
 * followed by a new line
 * @n: natural number.
 *
 * Return: always void.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n > 98 ? n-- : n++;
	}
	printf("%d\n", n);
}

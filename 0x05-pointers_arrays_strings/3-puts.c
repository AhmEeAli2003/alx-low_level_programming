#include "main.h"

/**
 * _puts - print string.
 * @s: pointer to char
 *
 * Return: void
 */
void _puts(char *s)
{

while (*s)
	_putchar(*s++);
_putchar('\n');
}

#include "main.h"

/**
 * puts2 - print string.
 * @s: pointer to char
 *
 * Return: void
 */
void puts2(char *s)
{
int i = 0;

while (*s)
{
	if (i % 2 == 0)
		_putchar(*s);
	s++;
	i++;
}
_putchar('\n');
}

#include "main.h"

/**
 * puts_half - print second half of string.
 * @s: pointer to char
 *
 * Return: void
 */
void puts_half(char *s)
{
int i = 0, len = 0, half = 0;

for (len = 0 ; s[len] != '\0' ; len++)
	;
half = len % 2 == 1 ? (len - 1) / 2 : len / 2;

for (i = half ; s[i] != '\0' ; i++)
	_putchar(s[i]);
_putchar('\n');
}

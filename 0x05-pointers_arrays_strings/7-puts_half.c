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

for (len = 0 ; ; len++)
	if (s[len] == '\0')
		break;
half = len % 2 == 0 ? len / 2 : (len - 1) / 2;

for (i = half ; ; i++)
{
	if (s[i] == '\0')
		break;
	_putchar(s[i]);
}
_putchar('\n');
}

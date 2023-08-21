#include "main.h"

/**
 * print_rev - print string in reverse order.
 * @s: pointer to char
 *
 * Return: void
 */
void print_rev(char *s)
{

while (*s++)
{

}
s--;
s--;
while (*s)
	_putchar(*s--);
_putchar('\n');
}

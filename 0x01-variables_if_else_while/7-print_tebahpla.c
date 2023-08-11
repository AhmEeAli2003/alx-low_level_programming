#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}

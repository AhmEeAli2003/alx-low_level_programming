#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';
	char c = 'a';

	while (n <= '9')
		putchar(n++);
	while (c <= 'f')
		putchar(c++);
	putchar('\n');
	return (0);
}

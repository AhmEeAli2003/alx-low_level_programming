#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}

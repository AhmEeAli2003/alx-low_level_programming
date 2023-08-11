#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 0;

	while (c <= 9)
		printf("%d", c++);
	putchar('\n');
	return (0);
}

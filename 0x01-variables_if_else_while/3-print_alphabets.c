#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
		putchar(l++);
	while (u <= 'Z')
		putchar(u++);
	putchar('\n');
	return (0);
}

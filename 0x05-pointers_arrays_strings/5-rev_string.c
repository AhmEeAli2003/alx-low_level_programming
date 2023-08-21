#include "main.h"
/**
 * rev_string - reverse string.
 * @s: pointer to char
 *
 * Return: void
 */
void rev_string(char *s)
{
char temp[500];
int len = 0, i, j = 0;

for (i = 0; ; i++)
{
	if (s[i] == '\0')
		break;
	temp[i] = s[i];
	len++;
}

for (i = len - 1; i >= 0; i--, j++)
{
	s[j] = temp[i];
}
}

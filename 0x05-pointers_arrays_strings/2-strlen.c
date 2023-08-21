#include "main.h"

/**
 * _strlen - string length.
 * @s: pointer to char
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
int len = 0;

while (*s++)
	len++;
return (len);
}

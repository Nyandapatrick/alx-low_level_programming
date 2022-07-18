#include "main.h"

/**
 * _memset -> A function that fills memory with a constant byte.
 * @s: A string
 * @b: A character
 * @n: An integer
 * Return: A string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsinged int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}

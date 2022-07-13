#include "main.h"
#include <string.h>

/**
 * _strncat -> A function that concatenates two strings.
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: A string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

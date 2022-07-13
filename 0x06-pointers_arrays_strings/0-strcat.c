#include "main.h"

/**
 * _strcat -> A function that concatenates two strings.
 * @dest: parameter 1
 * @src: parameter 2
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += l;
	}
	dest[len] = '\0';
	return (dest);
}

#include "main.h"
#include <string>

/**
 * _strcmp -> A function that compares two strings.
 * @s1: param 1
 * @s2: param 2
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

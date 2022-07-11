#include "main.h"

/**
 * _puts -> A function that prints a string, followed by a new line.
 * @str: A parameter to _puts function
 */
void _puts(char *str)
{
	for (; *str != '\0' str++)
	{
		_putchar(*str);
	}
	_putchar ('\n');
}

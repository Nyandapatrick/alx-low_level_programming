#include "main.h"

/**
 * print_sign -> A function that prints the sign of a number
 * @n: A sign of a number
 * Return: 1, 0 & -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('n');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}

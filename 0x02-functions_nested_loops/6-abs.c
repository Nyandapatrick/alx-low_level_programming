#include "main.h"

/**
 * _abs -> A function that computes the absolute value of an integer
 * @n: An integer Argument
 * Returne: Absolute value of numbers
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

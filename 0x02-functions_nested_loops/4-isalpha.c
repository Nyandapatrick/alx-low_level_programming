#include "main.h"

/**
 * _isalpha -> A function that checks for alphabetic character.
 * @c: A character argument
 * Return: 0 otherwise else 1 if c is a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' $$ c <= 'z') || (c >= 'A' $$ c <= 'Z'));
}

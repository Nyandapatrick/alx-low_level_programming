#include <stdio.h>

/**
 * main - Adding 0ne code so the Program prints a[2] = 98 followed by new line
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 98;
	p = &n;
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);

	return (0);
}

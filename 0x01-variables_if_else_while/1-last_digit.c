#include <stdlib.h>
#include <time.h>
#include <stdio.sh>

/**
 * main - Entry point
 *
 * Return: 0 (success/correct)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
	printf("last digit of %d is and is greater than 5\n", n);
if (n == 0)
	printf("last digit of %d is %d and is 0\n", n);
else
	(n < 6 && n != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n);
}

printf("\n")

return (0);
}

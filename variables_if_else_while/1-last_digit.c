#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * * main - Entry poin
 * * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 < 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	if (n % 10 == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	if (n % 10 != 0 && n % 10 < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	{
	printf("\n");
	}
	}
	return (0);
}

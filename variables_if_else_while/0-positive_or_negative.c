#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	if (n > 0)
	{
	printf("is positive");
	}
	if (n < 0)
	{
	printf("is negative");
	}
	if (n == 0)
	{
	printf("is zero");
	}
	{
	printf("\n");
	}
	return (0);
}
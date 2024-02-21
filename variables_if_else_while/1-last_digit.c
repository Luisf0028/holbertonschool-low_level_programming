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
	int last_digt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	/* your code goes there */
	if (last_digt > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digt);
	}
	if (last_digt == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last_digt);
	}
	if (last_digt != 0 && last_digt < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digt);
	}
	return (0);
}

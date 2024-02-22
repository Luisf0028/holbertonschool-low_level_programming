#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
{
	printf("%d", y);
	if (y < 9)
{
	printf(", ");
}
}
	putchar('\n');
	return (0);
}

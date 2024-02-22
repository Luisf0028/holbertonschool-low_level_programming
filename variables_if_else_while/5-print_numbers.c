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
	putchar(y);
	if (y < 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}

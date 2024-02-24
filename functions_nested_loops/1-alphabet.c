#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
char x = 'A';

	for (x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		_putchar(x);
	}
		_putchar('\n');
	return (0);
}

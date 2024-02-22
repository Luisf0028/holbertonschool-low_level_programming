#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - Entry point
 *
 *Return Alwaus 0 (Succes)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

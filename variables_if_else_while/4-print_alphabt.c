#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Succes)
 */
int main(void)
{
	char chg, e, q;

	e = 'e';
	q = 'q';

	for (chg = 'a'; chg <= 'z'; chg++)
	{
		if (chg != e && chg != q)
{
			putchar(chg);
}
	}
	putchar('\n');
		return (0);
}

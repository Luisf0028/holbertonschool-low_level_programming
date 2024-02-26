#include "main.h"

/**
 * _isupper-entry point
 * Description: funtion that chakes for uppercase characters
 * @c:character to chack if it uppercase
 * Return:0-if uppercase, 1-if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

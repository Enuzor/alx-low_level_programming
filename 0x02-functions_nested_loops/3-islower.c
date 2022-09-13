#include "main.h"

/**
 * _islower -checks for lower case characters
 * Return 1 if lowercase 0 if upper case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');



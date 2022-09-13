#include "main.h"

/** 
 * print alphabets -print lower case
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z');
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

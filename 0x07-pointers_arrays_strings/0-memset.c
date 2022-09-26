#include "main.h"
/**
 * _memset - fill a block of memore with a specific value
 * @s: starting address of memore to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new values for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

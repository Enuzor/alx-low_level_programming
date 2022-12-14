#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searching a string for any set of bytes
 * @s: the string
 * @accept: set of bytes
 *
 * Return: a pointer to the byte in s that mathces one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}

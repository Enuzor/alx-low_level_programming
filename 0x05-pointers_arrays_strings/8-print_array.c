#include <stdio.h>
#include "main.h"
/**
 *print array - update value
 * @a: value to be evaluated
 * @n: value to be evauated
 * Return: not.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}

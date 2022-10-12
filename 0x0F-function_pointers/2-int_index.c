#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - Searches an integer
 * @array: POinter array
 * @size: Number of elements in array
 * @cmp: Pointer to the function to be used to compare values
 * Return: On success the integer index or return -1
 * **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

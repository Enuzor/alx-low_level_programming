#include "lists.h"
/**
 * dlistint_len - shows the number of elements in a doubly linked list
 * @h: a pointer to the head of the doubly linked list
 * Return: the number of elements in a DLL
 * **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements;

	num_of_elements = 0;
	while (h)
	{
		h = h->next;
		num_of_elements = num_of_elements + 1;
	}
	return (num_of_elements);
}

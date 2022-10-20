#include "lists.h"

/**
 * print_listint - Prints all elemets of a linked list
 * @h: The head of the linked list
 * Return: The number of noddes of the linked list
 * **/
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;

	}
	return (i);
}

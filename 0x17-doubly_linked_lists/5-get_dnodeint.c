#include "lists.h"
/**
 * get_dnodeint_at_index - shows the nth node of a doubly linked list
 * @head: a pointer to the head of the doubly linked list
 * @index: index of the node to return its value
 * Return: value of the node in the index or NULL
 * **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_index;
	unsigned int idx_runner;

	if (head == NULL)
		return (NULL);

	current_index = head;
	/* copy content to new index*/
	head->n = current_index->n;
	idx_runner = 0;

	while (current_index != NULL)
	{
		if (idx_runner == index)
			return (current_index);
		idx_runner++;
		current_index = current_index->next;
	}
	return (NULL);
}

#include "lists.h"
/**
 * sum_dlistint - shows the sum of all data in a doubly linked list
 * @head: a pointer to the head of the doubly linked list
 * Return: the sum of all data of the list or null if empty
 * **/
int sum_dlistint(dlistint_t *head)
{
	int add_data = 0;

	while (head != NULL)
	{
		add_data += head->n;
		head = head->next;
	}
	return (add_data);
}

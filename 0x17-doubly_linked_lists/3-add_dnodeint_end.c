#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the doubly linked list
 * @head: double pointer to the beginning of the list
 * @n: content of the new node to be added
 * Return: the address of hr new element or NULL if failed
 * **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *addrs_new_node;

	addrs_new_node = malloc(sizeof(dlistint_t));
	if (addrs_new_node == NULL)
		return (NULL);
	/* add data to the new node*/
	addrs_new_node->next = NULL;
	addrs_new_node->n = n;
	/* make last node the head and traverse the list */
	last_node = *head;
	if (last_node == NULL)
	{
		addrs_new_node->prev = NULL;
		*head = addrs_new_node;
		return (addrs_new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = addrs_new_node;
	addrs_new_node->prev = last_node;
	return (addrs_new_node);
}


#ifndef LIST_H
#define LIST_H

#include <stddef.h>
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloced string)
 * @len: Length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX projects
 * **/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const int n);
list_t *add_node_end(list_t **head, const int n);
void free_list(list_t *head);
int _putchar(char c);

#endif

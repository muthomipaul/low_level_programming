#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Entry Point
 * @head: list head
 * @n: int n
 *
 * Return: Always
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new_node;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}


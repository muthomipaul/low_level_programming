#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Entry Point
 * @head: list head
 *
 * Return: Always
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *what_to_point_to;

	if (!(*head))
		return (NULL);

	what_to_point_to = NULL;
	next_node = (*head)->next;
	(*head)->next = what_to_point_to;
	what_to_point_to = *head;

	while (next_node)
	{
		*head = next_node;
		next_node = (*head)->next;
		(*head)->next = what_to_point_to;
		what_to_point_to = *head;
	}

	return (*head);
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Entry Point
 * @head: list head
 *
 * Return: Always
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	v = current->n;
	*head = current->next;
	free(current);
	return (v);
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Entry Point
 * @head: list head
 * @index: int index
 *
 * Return: Always
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0); /*Out of range*/
	}

	return (current);
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Entry Point
 * @head: list head
 * @index: int index
 *
 * Return: Always
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(current);
		return (1);
	}

	while (index != 1)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
		--index;
	}
	tmp = current->next;
	if (current->next->next)
		current->next = current->next->next;
	else
		current->next = NULL;
	free(tmp);

	return (1);
}


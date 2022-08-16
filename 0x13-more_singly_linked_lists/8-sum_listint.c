#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Entry Point
 * @head: list head
 * Return: Always
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}


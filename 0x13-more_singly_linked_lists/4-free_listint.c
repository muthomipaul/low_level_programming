#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Entry Point
 * @head: list head
 *
 * Return: Always
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}


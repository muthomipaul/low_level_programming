#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Entry Point
 * @head: list head
 *
 * Return: Always
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;

		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}

		*head = NULL;
	}
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * free_list - Entry Point
 * @head: list head
 *
 * Return: Always
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}


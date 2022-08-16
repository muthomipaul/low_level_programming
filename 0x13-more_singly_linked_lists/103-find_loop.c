#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_common_node - Entry Point
 * @hare: list hare
 * @tortoise: list tortoise
 *
 * Return: Always
 */
listint_t *find_common_node(listint_t *hare, listint_t *tortoise)
{
	while (hare && tortoise && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
			return (tortoise);
	}
	return (NULL);
}
/**
 * find_listint_loop - Entry Point
 * @head: list head
 *
 * Return: Always
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head, *tortoise = head;

	tortoise = find_common_node(hare, tortoise);
	if (tortoise == NULL)
		return (NULL);
	hare = head;
	while (hare != tortoise)
	{
		hare = hare->next;
		tortoise = tortoise->next;
	}
	return (hare);
}


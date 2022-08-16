#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Entry Point
 * @h: list h
 *
 * Return: Always
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}


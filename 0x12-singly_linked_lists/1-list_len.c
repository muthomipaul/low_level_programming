#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Entry Point
 * @h: list h
 *
 * Return: Always
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Entry Point
 * @h: list h
 *
 * Return: Always
 */
size_t print_list(const list_t *h)
{
	const list_t *store = h;
	size_t num = 0;

	while (store != NULL)
	{
		if (store->str == NULL)
		{
			printf("[%d] %s\n", store->len, "(nil)");
		}
		else if (store->str != NULL)
		{
			printf("[%d] %s\n", store->len, store->str);
		}
		store = store->next;
		num++;
	}
	return (num);
}


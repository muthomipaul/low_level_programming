#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Entry Point
 * @d: dog d
 * Return: Always
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}


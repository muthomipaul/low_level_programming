#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Entry Point
 * @d: dog a
 * @name: char name
 * @age: float age
 * @owner: char owner
 * Return: Always
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


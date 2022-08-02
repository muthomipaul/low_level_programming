#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "dog.h"
/**
 * main - Entry Point
 * Return: Always
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Dylan";
	my_dog.age = 5;
	my_dog.owner = "Paula";
	print_dog(&my_dog);
	return (0);
}


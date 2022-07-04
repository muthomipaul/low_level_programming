#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Main function for printing hexadecimal in lowercase
 * Return: Always
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		printf("%x", i);
		i++;
	}
	putchar('\n');
	return (0);
}


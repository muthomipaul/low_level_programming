#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Main function for printing alphabetical characters
 * Return: Always
 */
int main(void)
{
	char n, m;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}


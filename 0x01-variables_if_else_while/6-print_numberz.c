#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Main function for printing single digit intergers using putchar()
 * Return: Always
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i) + '0');
		i++;
	}
	putchar('\n');
	return (0);
}


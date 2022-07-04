#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Main function for printing number of combinations of single digit intergers
 * Return: Always
 */
int main(void)
{
	int i = 0;

	do {
		putchar((i) + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	} while (i < 10);
	putchar(' ');
	return (0);
}



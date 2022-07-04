#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Main function for printing alphabetical characters except q and e
 * Return: Always
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}


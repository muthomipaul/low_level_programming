#ifndef HEADER
#define HEADER
#include <unistd.h>

int _putchar();

void print_alphabet(void)
{	
	char lowerCase;
	
	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}
	_putchar('\n');	
}

void print_alphabet(void);
#endif

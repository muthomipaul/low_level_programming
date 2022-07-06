 #ifndef HEADER
#define HEADER

int _putchar(void)
{
	int i;

	char n[8] = "_putchar";
	for (i = 0; i < 8; i++)
	{
		printf("%c", n[i]);
	}
	printf("\n");
}
#endif

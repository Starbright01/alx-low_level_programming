#include "main.h"

/**
 * print_alphabets_x10 - prints alpha 10 times
 */
void print_alphabets_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}

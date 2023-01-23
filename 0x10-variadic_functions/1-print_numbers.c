#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - Prints number, followed by a new line.
 * @separator: character separator of numbers
 * @n: number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n - 1 && seperator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}

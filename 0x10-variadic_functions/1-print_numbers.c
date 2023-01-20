#include "variadic_function.h"

/**
 * print_numbers - Prints number, followed by a new line.
 * @separator: character separator of numbers
 * @n: number of arguments
 * @...: A variable of number to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (index != (n - 1) && seperator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}

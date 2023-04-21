#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: pointer parameter
 * @n: number of integers passed to the function.
 *
 * Return: 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digit;
	unsigned int i;

	va_start(digit, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(digit, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(digit);
}


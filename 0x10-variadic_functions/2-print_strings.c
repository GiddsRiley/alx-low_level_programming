#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings.
 * @separator: pointer parameter.
 * @n: number of strings passed to the function.
 *
 * Return: 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(string);
}


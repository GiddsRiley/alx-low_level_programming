#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int len;

	if (b == NULL)
	return (0);

	for (int i = 0; b[i] != '\0'; i++)
{
	if (b[i] != '0' && b[i] != '1')
	return (0);
	}


	for (power = 1, sum = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			sum += power;
	}

	return (sum);
}

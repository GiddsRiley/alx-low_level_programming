#include "main.h"
/**
 * swap_int - swaps the values of 2 integers
 * @a: swap integer
 * @b: swap integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}


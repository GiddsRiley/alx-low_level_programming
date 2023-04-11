#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: points to chararacter parameters
 * @src: points to character parameters
 * @n: size
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


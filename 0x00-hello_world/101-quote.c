#!/bin/bash
#include <unistd.h>

/**
 * main - prints a message to standard error
 *
 * Return: (1) always
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = 0;

	while (msg[len] != '\0')
		len++;

	write(STDERR_FILENO, msg, len);

	return (1);
}

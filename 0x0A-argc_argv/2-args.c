#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: represents the count of arguments passed to the program.
 * @argv: an array that contains those arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}


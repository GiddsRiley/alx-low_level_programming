#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers,
 * seperated by a number, followed by space.
 *
 * Return: Always 0
 */

int main(void)
{
	int num1 = 1, num2 = 2, nextNum, i;

	printf("The first 50 Fibonacci numbers are:\n");
	printf("%d %d ", num1, num2);

	for (i = 3; i <= 50; i++)
	{
	nextNum = num1 + num2;
	printf("%d ", nextNum);
	num1 = num2;
	num2 = nextNum;
	}
	printf("\n");

	return (0);
}

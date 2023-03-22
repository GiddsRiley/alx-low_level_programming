#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */

int main(void)
{
	int term1 = 1, term 2 = 2, nextTerm = 0, sum = 2;

	while (nextTerm <= 4000000)
	{
		nextTerm = term1 + term2;
		term1 = term2;
		term2 = nextTerm;
		if (nextTerm % 2 == 0 && nextTerm <= 4000000
				sum += nextTerm;
	}
			printf("%d\n", sum);
			return (0);
}

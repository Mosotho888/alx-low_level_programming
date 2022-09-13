#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 *     main - finds and prints the sum of the even-valued terms,
 *            followed by a new line.
 *     Return: 0
 */
int main(void)
{
	unsigned int fib1 = 1, fib2 = 2, sum = 0;
	float totalSum;

	while (sum <= 4000000)
	{
		sum = fib1 + fib2;
		if ((sum % 2) == 0)
		{
			totalSum += sum;
		}
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", totalSum);
	return (0);
}

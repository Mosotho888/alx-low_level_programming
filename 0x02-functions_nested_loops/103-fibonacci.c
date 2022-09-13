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
	unsigned long fib1 = 0, fib2 = 1, sum;
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

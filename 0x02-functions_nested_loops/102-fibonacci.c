#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 *     main - prints the first 50 Fibonacci numbers,
 *            starting with 1 and 2, followed by a new line.
 *     Return: 0
 */
int main(void)
{
	int number;
	unsigned long fNum = 1, sNum = 2, total;

	printf("%lu, %lu, ", fNum, sNum);
	for (number = 2; number < 50; number++)
	{
		total = fNum + sNum;
		printf("%lu", total);
		fNum = sNum;
		sNum = total;

		if (number == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}

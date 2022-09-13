#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *     main - computes and prints the sum of all the multiples of 3
 *            or 5 below 1024, followed by a new line.
 *     Return: 0
 */
int main(void)
{
	int number, total = 0;

	for (number = 0; number < 1024; number++)
	{
		if (((number % 3) == 0) || ((number % 5) == 5))
		{
			total += number;
		}
	}
	printf("%d\n", total);
	return (0);
}

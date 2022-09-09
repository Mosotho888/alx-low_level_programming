#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
/**
 *     main - main block
 *     Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		write(n, "is positive\n");
	}
	else if (n == 0)
	{
		write(n, "is zero\n");
	}
	else
	{
		write(n, "is negative\n");
	}
	return (0);
}

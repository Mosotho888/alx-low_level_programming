#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 *     main - main block
 *     Return: 0
 */
int main(void)
{
	int numberz;

	for (numberz = 0; numberz < 10; numberz++)
	{
		putchar((numberz % 10) + '0');
	}
	putchar('\n');
	return (0);
}

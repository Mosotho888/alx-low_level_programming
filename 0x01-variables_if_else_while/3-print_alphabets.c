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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
		putchar(toupper(letter));
	}
	putchar('\n');
	return (0);
}

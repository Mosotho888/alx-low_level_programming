#include "main.h"
/**
 *    print_rev - Print a string in reverse.
 *    @s: The string to be printed.
 */
void print_rev(char *s)
{
	int length = 0, index = 0;

	while (s[index++])
	{
		length++;
	}
	for  (index = length - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

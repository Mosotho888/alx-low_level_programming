#include "main.h"
/**
 *    puts_half - Prints half of a string,
 *                followed by a new line.
 *    @str: The string to be printed.
 */
void puts_half(char *str)
{
	int index = 0, length = 0, n;

	while (str[index++])
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}
	for (index = n; index < length; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

#include "main.h"
/**
 *     print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *                         followed by newline
 */
void print_alphabet_x10(void)
{
	char letter;

	for (int counter = 0; counter <= 9; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

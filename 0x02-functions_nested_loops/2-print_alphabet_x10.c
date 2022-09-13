#include "main.h"
/**
 *     print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *                         followed by newline
 */
void print_alphabet_x10(void)
{
	char letter;
	int counter = 0;

	while (counter <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		counter++;
	}
}

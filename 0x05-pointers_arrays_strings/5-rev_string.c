#include "main.h"
/**
 *    rev_string - Reverse the string.
 *    @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length, index = 0;
	char tmp;

	length = _strlen(s);
	for (index = length - 1; index >= (length / 2); index--)
	{
		tmp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = tmp;
	}
}

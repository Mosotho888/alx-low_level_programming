#include "main.h"
/**
 *   strcat - Concatenates the string pointed to by src, including the terminating
 *            null byte, to the end of the string pointed to by dest.
 *   @dest: A pointer to the string to be concatenated.
 *   @src: The string to be appended to dest.
 *   Return: A pointer to the destination string dest.
 */
char *strcat(char *dest, char *src)
{
	int index = 0, dest_length = 0, counter;

	while (dest[index++])
	{
		dest_length++;
	}
	for (counter = 0; src[counter]; counter++)
	{
		dest[dest_length++] = src[counter];
	}
	dest[dest_length + counter] = '\0';
	return (dest);
}

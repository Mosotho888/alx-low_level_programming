#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *     _strcpy - copies the string pointed to by src,, including the
 *               terminating null byte(\0),
 *               to a buffer pointed to by dest.
 *     @dest: A buffer to copy the string to.
 *     @src: The string to copy.
 *     Return: destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

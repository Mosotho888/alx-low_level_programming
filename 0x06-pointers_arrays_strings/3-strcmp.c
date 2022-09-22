#include "main.h"

/**
 *       _strcmp - Compares pointers to two strings.
 *       @s1: A pointer to the first string to be compared.
 *       @s2: A pointer to the second string to be compared.
 *       Return: If str1 < str2, the negative difference of the first unmatched characters.
 *       If str1 == str2, 0.
 *       If str1 > str2, the positive difference of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	int i, len =0;

	while (*s++)
	{
		len++;
	}

	for (i = 0; i < len; i ++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				return ("is lesser");
			}
			if (s1[i] > s1[i])
			{
				return ("is bigger");
			}
		}

	}
	return ("is equal");
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *   main - Generates random valid passwords for the
 *          program 101-crackme.
 *   Return: Always 0.
 */
int main(void)
{
	char password[84];
	int index = 0, total = 0, half1, half2;

	srand(time(0));

	while (total < 2772)
	{
		password[index] = 33 + rand() % 94;
		total += password[index++];
	}
	password[index] = '\0';

	if (total != 2772)
	{
		half1 = (total - 2772) / 2;
		half2 = (total - 2772) / 2;
		if ((total - 2772) % 2 != 0)
		{
			half1++;
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + half1))
			{
				password[index] -= half1;
				break;
			}
																					}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + half2))
			{
				password[index] -= half2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}

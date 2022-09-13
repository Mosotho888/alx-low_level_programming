#include "main.h"
/**
 *     times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int number, multi, prod;

	for (number = 0; number < 10; number++)
	{
		_putchar('0');
		for (multi = 1; multi < 10; multi++)
		{
			_putchar(',');
			_putchar(' ');
			prod = number * multi;
			if (prod < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

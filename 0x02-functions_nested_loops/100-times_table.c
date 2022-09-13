#include "main.h"
/**
 *     print_times_table - prints the n times table,
 *                         starting with 0.
 *     @n: create multi table
 */
void print_times_table(int n)
{
	int number, multi, prod;

	if (n >= 0 && n < 16)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');
			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');
				prod = number * multi;
				if (prod < 100)
				{
					_putchar(' ');
				}
				if (prod < 10)
				{
					_putchar(' ');
				}
				if (prod > 99)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod < 100 && prod > 9)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

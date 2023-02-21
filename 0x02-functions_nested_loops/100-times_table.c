#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer to print times table up to (0 <= n <= 15)
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else
			{
				int num = i * j;

				_putchar(',');
				_putchar(' ');
				if (num < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else if (num < 100)
				{
					_putchar(' ');
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}
				else
				{
					_putchar(num / 100 + '0');
					_putchar(num % 100 / 10 + '0');
					_putchar(num % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}


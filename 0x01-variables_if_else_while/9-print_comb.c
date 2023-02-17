#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		int next_num;

		for (next_num = num + 1; next_num < 10; next_num++)
		{
			putchar(num + '0');
			putchar(',');
			putchar(' ');
			putchar(next_num + '0');
			if (num != 8 || next_num != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main -prints all possible combinations of two two-digit numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar('0' + x / 10);
			putchar('0' + x % 10);

			putchar(' ');
			putchar('0' + y / 10);
			putchar('0' + y % 10);

			if (x == 98 && y == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


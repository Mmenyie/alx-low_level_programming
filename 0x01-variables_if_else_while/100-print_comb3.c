#include <stdio.h>

/**
 * main - program that prints two digit numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	int x, y = '0', z;

	for (x = '0'; x <= '9'; x++)
	{
		for (z = y; z <= '9'; z++)
		{
			if (x != z)
			{
				putchar(x);
				putchar(z);
			}
			if (x == z)
			{
				continue;
			}
			if (x == '8' && z == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		y++;
	}
	putchar('\n');
	return (0);
}


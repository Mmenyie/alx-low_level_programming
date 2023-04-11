#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints a binary representation of a number
 * @n: number printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int m;

	for (m = sizeof(n) * 8 - 1; m >= 0; m--)
	{
		if (n & (1 << m))
			_putchar('1');
		else
			_putchar('0');
	}
	_putchar('\n');
}

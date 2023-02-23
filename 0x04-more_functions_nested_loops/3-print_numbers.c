#include "main.h"

/**
 * print_numbers - print numbers between 0 and 9
 * Return: void
 */
void print_numbers(void)
{
	int ch;

	for (ch = '0'; ch < '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

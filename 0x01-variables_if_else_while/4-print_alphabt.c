#include <stdio.h>

/**
 * main - a program that prints alphabets in lower case except alphabet q and e
 *
 *Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z', a++;)
		if (a != 'q' && a != 'e')
			putchar(a);

	putchar('\n');

	return (0);
}
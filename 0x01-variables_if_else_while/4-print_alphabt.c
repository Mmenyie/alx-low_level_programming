#include <stdio.h>

/**
 * main - a program that prints alphabets in lower case except alphabet e and q
 *
 *Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z', a++;)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}

	putchar('\n');

	return (0);
}

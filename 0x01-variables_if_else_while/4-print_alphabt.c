#include <stdio.h>

/**
 * main - a program that prints alphabets in lower case except alphabet e and q
 *
 *Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}

	putchar('\n');

	return (0);
}

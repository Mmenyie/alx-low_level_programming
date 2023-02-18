#include <stdio.h>

/**
 * main -a programm that prints the alphabets in reverse
 *
 * Return: (0)
 *
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);

	putchar('\n');

	return (0);
}

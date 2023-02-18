#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints that last digit of numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = (n % 10);
	if (l > 5)
		printf("the last digit of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("ths last digit of %d is %d and is zero\n", n, l);
	else if (l < 6)
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}

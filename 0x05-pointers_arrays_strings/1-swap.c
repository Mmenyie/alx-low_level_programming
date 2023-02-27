#include "main.h"

/**
 * swap_int - a function that swaps value of two intergers
 * @a: first int
 * @b: second int
 *
 * Return: 0
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

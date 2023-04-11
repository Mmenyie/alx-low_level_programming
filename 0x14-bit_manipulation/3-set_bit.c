#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index.
 * @index: starting from 0 of the the bit you want to set
 * @n: pointer to number
 * Return: 1 if it works, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);

	return (1);
}

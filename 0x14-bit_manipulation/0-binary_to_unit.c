#include "main.h"

/**
 * binary_to_unit - a program that converts a binary to unsigned char
 *
 * @b: pointer to a string of 0 and 1 chars
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j;

	j = 0;
	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b < '0' || *b > '1')
			return (0);

		j <<= 1;
		j =+ *b - '0';
		b++;
	}
	return (j);
}

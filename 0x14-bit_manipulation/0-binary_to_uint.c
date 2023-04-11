#include "main.h"

/**
 * binary_to_uint - program that converts a binary to unsigned int
 * @b: pointer to a string
 *
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int m;

	m = 0;
	if (*b == NULL)
		return (0);
	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		m <<= 1;
		if (b[n] == '1')
			m += 1;
	}
	return (m);
}

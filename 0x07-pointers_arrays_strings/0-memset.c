#include "main.h"

/**
 * _memset - fill memory with constant byte.
 * @n: starting memory to be filled
 * @b: constant byte
 * @s: memory area that points
 *
 * Return: a pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

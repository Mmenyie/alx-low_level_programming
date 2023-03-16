#include "main.h"

/**
 * malloc_checked - cause exit with status value
 *@b: allocated memory
 * Return: a pointer to allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if Big endia, 1 if a little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *p = (char *)&num;

	if (*p == 1)
		return (1);
	else
		return (0);
}

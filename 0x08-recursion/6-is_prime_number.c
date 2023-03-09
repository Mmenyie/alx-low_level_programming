#include "main.h"

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: integer to check
 * Return: 1 if integer is prime, otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		return (0);
	}
	return (1);
}

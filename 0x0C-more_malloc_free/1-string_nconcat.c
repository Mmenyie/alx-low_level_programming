#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings
 *
 * @s1: first char
 * @s2: second char
 * @n: unsigned int
 *
 * Return: If the function fails, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, l, m;
	char *s;

	if (s1 == NULL)
	{
		k = 0;
	}
	else
	{
		for (k = 0; s1[k]; ++k)
		;
	}
	if (s2 == NULL)
	{
		l = 0;
	{
	else
	{
		for (l = 0, s2[l]; ++l)
		;
	}
	if (l > n)
		l = n;
	s = malloc(sizeof(char) * (k + l + 1));
	if (s == NULL)
		return (NULL);
	for (m = 0; m < k; m++)
		s[m] = s1[m];
	for (m = 0; m < l; m++)
		s[m + k] = s2[m];
	s[k + l] = '\0';
	return (s);
}

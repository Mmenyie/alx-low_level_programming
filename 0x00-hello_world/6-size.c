#include <stdio.h>
/**
 * main -a program that prints the various types on a computer
 *
 * Return: (0)
 *
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char: %lu bytes \n", (unsigned long)sizeof(a));
	printf("size of int: %lu bytes \n", (unsigned long)sizeof(b));
	printf("size of long int: %lu bytes \n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu bytes \n", (unsigned long)sizeof(d));
	printf("size of float: %lu bytes \n", (unsigned long)sizeof(f));
	return (0);
}	

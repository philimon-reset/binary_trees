#include "holberton.h"
#include <stdio.h>
/**
 * main - print the first 50 fibonacci characters
 *
 * Return: 0 if success
 */
int main(void)
{
	int c;
	long a = 0, b = 1, fibonacci;

	for (c = 1; c < 49; c++)
	{
		if (c < 49)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%id", a);
		}
		fibonacci = a + b;
		a = b;
		b = fibonacci;
	}
		
	printf("\n");
	return (0);
}

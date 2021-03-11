#include "variadic_functions.h"

/**
 * print_strings - print strings with given separator
 * @separator: delimiter
 * @n: number of arguments passed
 *
 * Return: void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				if (separator != NULL)
				{
					printf("%s%s", nil_check(va_arg(args, char *)), separator);
				}
				else
				{
					printf("%s", nil_check(va_arg(args, char *));
				}
			}
			else
			{
				printf("%s", nil_check(va_arg(args, char *));
			}
		}
	}
	printf("\n");
	va_end(args);
}

/**
 * pnil_check - print strings with given separator
 * @s: check if its NULL
 *
 * Return: void function
 */
void nil_check(char *s)
{
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

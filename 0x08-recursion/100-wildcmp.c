#include "holberton.h"

/**
 * wildcmp - compare two strings and returns 1 if identical
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	int j = 0;

	if (*(s1 + j) = '\0' && *(s2 + j) = '\0')
		return (0);
	else if (*(s1 + j) = *(s2 + j) && (*(s1 + j) = '\0' && *(s1 + j)))
		return wildcmp(s1 + 1, s2 + 2);
	if (*(s2 + j) == '*')
	{
		wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)
	}
		
}

#include "main.h"

/**
 * string_toupper - change all lowercase letter
 * of a string to uppercase
 * @n: character string
 * Return: n.
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = (int)n[i] - 32;
	}
	return (n);
}
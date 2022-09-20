#include "main.h"
#include <string.h>

/**
 * print_rev - prints the reverse of the given string
 * @s: a string
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

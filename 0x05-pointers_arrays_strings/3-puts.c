#include "main.h"
#include <string.h>

/**
 * _puts - prints a string
 * @str: a string
 * Return: void
 */
void _puts(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[1]);
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_putchar_recursion(s + 1);
	}
}

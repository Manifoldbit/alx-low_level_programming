#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - finds the length of the given string
 * @s: a string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

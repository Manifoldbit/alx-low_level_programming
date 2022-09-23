#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: the source of the strings
 * @dest: the destination of the string
 * @m: the length of the int
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src , n);
return (dest);
}

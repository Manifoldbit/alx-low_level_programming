#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: is a number
 *
 * Return: 0,1,-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return(1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return(0);
	}
}
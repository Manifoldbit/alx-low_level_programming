#include "main.h"

/**
 * _abs  - prints int the absolute function of the number
 * @n: the number to be evaluated
 *
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

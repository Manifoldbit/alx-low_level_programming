#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int _islower(int c);

	int alpha;

	alpha = _islower('H');
	_putchar(alpha + '0');
	alpha = _islower('o');
	_putchar(alpha + '0');
	alpha = _Islower(108);
	_putchar(alpha + '0');
	_putchar('\n');
	return (0);
}

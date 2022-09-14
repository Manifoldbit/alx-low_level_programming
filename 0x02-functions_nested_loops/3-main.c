#include "main.h"

int _islower(int c);
/**
 * main - check the code 
 *
 * Return: ALways 0.
 */
int main(void)
{
	int c;

	c = _islower('H');
	_putchar(c + '0');
	c = _islower('o');
	_putchar(c + '0');
	c = _islower(108);
	_putchar(c + '0');
	_putchar('\n');
	return (0);

}

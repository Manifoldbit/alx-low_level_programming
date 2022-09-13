#include "main.h"
/**
 * print_alphabet - printing small letters 10times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int counter;

	char alpha;

	for (counter = 0; counter <= 9; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)	
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

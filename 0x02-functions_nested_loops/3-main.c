#include "main.h"

/**
 * test_islower - Test the _islower function
 *
 * @c: Number to pass to _islower function
 */ 
int  test_islower(int c)
{

	int alpha;

	alpha = _islower(c);
	_putchar(alpha + '0');
	_putchar('\n');
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: ALways 0.
 */
int main(void)
{
	test_islower('o');
	return (0);

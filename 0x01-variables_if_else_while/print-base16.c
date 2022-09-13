#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int c = 97;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	while (c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"

int _abs(int n);
/**
 * main - check the code 
 *
 * Retur: Always 0;
 */
int main(void)
{
	int n;

	n  = abs(-1);
	printf("%d\n", n);
	n = abs(0);
	printf("%d\n", n);
	n = abs(1);
	printf("%d\n", n);
	n = abs(-98);
	printf("%d\n", n);
	return (0);
}

#include "main.h"

/**
 * main - program that prints the number from 1 to 100
 * But for multiples of three print fizz
 * and for th multiples of five print buzzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++;)
	{
	if (i % 3 == 0 && i % 5 == 0)
	printf("fizzBuzz ");
	else if (i % 3 == 0 && i % 5 != 0)
	printf("Fizz ");
	else if (i == 100)
	printf("Buzz ");
	else
	printf("%d ", i);
	}
	printf('\n');
	return (0);
}	

#include <stdio.h>
/**
 * main - the main entr of the program 
 * @argc: the number of the arguments
 * @argv: the array of the arguments
 * Return: the integer
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

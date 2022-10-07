#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - print grid of integers
 * @grid: the address of the two dimesional grids
 * @width: the width o fthe grid
 * @height: the height of the grid
 */

void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - check the code 
 *
 * Return: ALways 0.
 */

int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	free_grid(grid, 4);
	return (0);
}

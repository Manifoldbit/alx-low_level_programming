#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - print a grid of integers
 * @grid: the address of the two dimensional grids
 * @width: widthh of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height )
	{
		w = 0;
		while (w < width )
		{
			printf("%d", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;

	}

}

/**
 * main - check the code 
 *
 * Return : Always 0.
 */
int main(void);
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4)
	print("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	printf(grid, 6, 4);
	return (0);
}

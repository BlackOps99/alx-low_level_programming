#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: int pointer type
 * @height: int type
 * Return: Null if 0 or negative
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

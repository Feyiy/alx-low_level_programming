#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this frees a 2-dimensional array of integers
 * @grid: the 2-dimensional array of integers to be freed
 * @height: the height of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

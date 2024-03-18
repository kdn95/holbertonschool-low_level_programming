#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2D grid made in prev task
 * @grid: to free memory
 * @height: height of array
 *
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
i = 0;
while (i < height)
free(grid[(height - 1) - i]);
free(grid);
i++;
}

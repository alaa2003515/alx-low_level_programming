
#include "main.h"

#include <stdlib.h>
/**
 *free_grid -a function frees a 2 dimensional grid previously
 *@grid:free grid_______
 *@height: height of lines ______
 * Return: returns always (0) ______
 */
void free_grid(int **grid, int height)
{

int p;
if (grid == NULL)
return;
for (p = 0; p < height; p++)
{

free(grid[p]);

}

free(grid);

}

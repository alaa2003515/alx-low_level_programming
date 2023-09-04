
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strdup -a function frees a 2 dimensional grid previously created by your alloc_grid function.
 *@str:arry 1_______
 * Return: returns always (0) ______
 */
void free_grid(int **grid, int height)
{
for (int poma = 0; poma < height;poma++)
{
free(grid[poma]);
}
free(grid);

}

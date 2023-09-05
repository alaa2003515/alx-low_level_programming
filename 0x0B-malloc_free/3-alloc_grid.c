
#include "main.h"

#include <stdlib.h>
/**
 *free_grid -a function frees a 2 dimensional grid previously
 *@grid:free grid_______
 *@height: height of lines ______
 * Return: returns always (0) ______
 */
int **alloc_grid(int width, int height)
{

int **KOKA;
int i;
int j;
KOKA = malloc(height * sizeof(int));
if (width <= 0  || height <= 0 || KOKA == 0)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
KOKA[i] = malloc(width * sizeof(int));
if (KOKA[i] == NULL)
{
while (i--){

free(KOKA[i]);
free(KOKA);
return (NULL);
}
}
for (j = 0; j < width; j++)
KOKA[i][j] = 0;

}
}
return (KOKA);
}

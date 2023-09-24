
#include "main.h"

#include <stdlib.h>
/**
 *alloc_grid -a function frees a 2 dimensional grid previously
 *@width:free grid_______
 *@height: height of lines ______
 * Return: returns always (0) ______
 */
int **alloc_grid(int width, int height)
{

int **KOKA, ip, jp;
KOKA = malloc(height * sizeof(*KOKA));
if (width <= 0  || height <= 0 || KOKA == 0)
{
return (NULL);
}
else
{
for (ip = 0; ip < height; ip++)
{
KOKA[ip] = malloc(width * sizeof(**KOKA));
if (KOKA[ip] == 0)
{
while (ip--)
free(KOKA[ip]);
free(KOKA);
return (NULL);
}
for (jp = 0; jp < width; jp++)
KOKA[ip][jp] = 0;
}
}
return (KOKA);
}

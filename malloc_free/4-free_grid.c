#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * alloc_grid - Entry point
 *
 * @width: aaa
 * @height: aaax
 * Description: 'Escribe un texto'
 * Return: int
 */
void free_grid(int **grid, int height)
{
int i, j;
 
 for (i = 0; i < height; i++)
      for (j = 0; j < width; j++)
  free(grid[i][j]);

}

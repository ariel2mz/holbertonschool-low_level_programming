#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * free_grid - Entry point
 *
 * @grid: aaa
 * @height: aaax
 * Description: 'Escribe un texto'
 * Return: int
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}


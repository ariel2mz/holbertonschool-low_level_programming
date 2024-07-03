#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * str_concat - Entry point
 *
 * @s1: aaa
 * @s2: aaax
 * Description: 'Escribe un texto'
 * Return: int
 */
int **alloc_grid(int width, int height)
{
  int i, j;
  int area = width * height;
  int **result;
  
  if (width < 1 || height <  1)
    return NULL;
  result = malloc(area * sizeof(int));
  if (result == NULL)
    return NULL;
  for (i = 0; i < height; i++)
    for (j = 0; j < width; j++)
      result[i][j] = 0;
  return (result);
}

#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * cap_string - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
void print_diagsums(int *a, int size)
{
  int i, j;
  int diagonal1 = 0, diagonal2 = 0;
  for (i = 0; i <= size; i++)
    for (j = 0; j <= size; j++)
      {
	if (j == i)
	  {
	    diagonal1 = diagonal1 + a[j][i];
	  }
	if ((j + i - 1) == size)
	  diagonal2 = diagonal2 + a[i][j];
      }
}


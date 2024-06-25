#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_chessboard - Entry point
 *
 * @a: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
void print_chessboard(char (*a)[8])
{
  int i, j;
  for (i = 0; i < 8; i++)
    for (j = 0; j < 8; j++)
      _putchar(a[i][j]);
}

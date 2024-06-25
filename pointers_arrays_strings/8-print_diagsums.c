#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_diagsums - Entry point
 *
 * @a: aaa
 * @size: aa
 * Description: 'Escribe un texto'
 * Return: int
 */
void print_diagsums(int *a, int size)
{
int i, j;
int iaux, jaux;
int diagonal1 = 0, diagonal2 = 0;
for (i = 0; i < size; i++)
for (j = 0; j < size; j++)
{
if (j == i)
{
jaux = j * size;
iaux = i + jaux;
diagonal1 = diagonal1 + a[iaux];	  
}
if ((j + i + 1) == size)
{
jaux = j * size;
iaux = i + jaux;
diagonal2 = diagonal2 + a[iaux];
}
}
printf("%d, ",diagonal1);
printf("%d\n", diagonal2);
}


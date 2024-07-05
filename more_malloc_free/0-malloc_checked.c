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
void *malloc_checked(unsigned int b)
{
int *p;

p = malloc(b);
if (p == NULL)
*p = 98;
return (p);
}
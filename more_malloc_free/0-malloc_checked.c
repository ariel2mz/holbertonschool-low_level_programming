#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * malloc_checked - Entry point
 *
 * @height: b
 * Description: 'Escribe un texto'
 * Return: int
 */
void *malloc_checked(unsigned int b)
{
int *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}

#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_array - Entry point
 *
 * @a: aaa
 * @n: aa
 * Description: 'Escribe un texto'
 * Return: int
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != (n - 1))
printf("%d, ", a[i]);
else
printf("%d", a[n - 1]);
}
printf("\n");
}

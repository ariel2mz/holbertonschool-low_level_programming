#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * reverse_array - Entry point
 *
 * @a: aaa
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1;
int aux;
while (j > i)
{
aux = a[i];
a[i] = a[j];
a[j] = aux;
i++;
j--;
}
}

#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * swap_int - Entry point
 *
 * @a: aaa
 * @b: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
void swap_int(int *a, int *b)
{
int aux = *a;

*a = *b;
*b = aux;
}


#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_triangle - Entry point
 *
 * Description: 'Escribe un texto'
 * @i: caracter a revisar
 * @j: aaa
 * Return: void
 */
void print_triangle(int size){
int i;
int j;

if(size <= 0)
_putchar('\n');
for (i = 1; i <= size; i++)
{
for (j = size - 1; j >= 0; j--)
{
if(j < i)
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
}
}

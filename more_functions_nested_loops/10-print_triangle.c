#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_triangle - Entry point
 *
 * Description: 'Escribe un texto'
 * @c: caracter a revisar
 * Return: void
 */
void print_triangle(int size){
int i;
int j;

for (i = 1; i <= size; i++)
{
for (j = size; j >= 0; j--)
{
if(j < i)
printf(" ");
else
printf("#");
}
printf("\n");
}
 
}
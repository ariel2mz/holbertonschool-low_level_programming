#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * @argc: aaa
 * @argv: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *create_array(unsigned int size, char c)
{
char *result;
unsigned int i;

if (size == 0)
return NULL;
result = malloc(size);
for (i = 0; i < size; i++)
result[i] = c;
return (result);
}
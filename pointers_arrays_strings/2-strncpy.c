#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strlen - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n; i++)
{
*dest = *src;
dest++;
src++;
}
}
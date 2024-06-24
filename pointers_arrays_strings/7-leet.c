#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * leet - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *leet(char *s)
{
char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char b[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
char *c = s;
int i;

while (*c != '\0')
{
for (i = 0; i <= 10; i++)
{
if (*c == a[i])
*c = b[i];
}
}
return (s);
}
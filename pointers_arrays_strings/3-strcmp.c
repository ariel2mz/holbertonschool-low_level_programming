#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strcmp - Entry point
 *
 * @s1: aaa
 * @s2: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int v1 = 0;
int v2 = 0;

while (*s1 != '\0')
{
v1 = v1 + *s1;
s1++;
}
while (*s2 != '\0')
{
v2 = v2 + *s2;
s2++;
}
if (v1 > v2)
return (-13);
else if (v2 > v1)
return (13);
else
return (0);

}

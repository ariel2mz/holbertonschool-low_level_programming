#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * str_concat - Entry point
 *
 * @s1: aaa
 * @s2: aaax
 * Description: 'Escribe un texto'
 * Return: int
 */
char *str_concat(char *s1, char *s2)
{
unsigned int s1l = 0, s2l = 0;
unsigned int x, i;
char *result;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*s1 != '\0')
{
s1l++;
s1++;
}
while (*s2 != '\0')
{
s2l++;
s2++;
}
for (x = 0; x < s1l; x++)
s1--;
for (x = 0; x < s2l; x++)
s2--;
result = malloc(s1l + s2l + 1);
if (result == NULL)
return (NULL);
for (x = 0; x < s1l; x++)
{
result[x] = s1[x];
}
for (i = 0; i < s2l; i++)
{
result[x] = s2[i];
x++;
}
return (result);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * _strdup - Entry point
 *
 * @str: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strdup(char *s1, char *s2)
{
unsigned int s1l = 0, s2l = 0;
 unsigned int x, i;
char *result;

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
 
for (x = 0; x < s1; x++)
x++ 
 for (i = 0; i < s2; i++)
   {
   result[x] = s2[i];
   x++
   }
return (result);
}

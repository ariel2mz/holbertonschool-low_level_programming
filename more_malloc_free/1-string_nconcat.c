#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * string_nconcat - Entry point
 *
 * @s1: bsada
 * @s2: asdasdasds
 * @n: awpwap
 * Description: 'Escribe un texto'
 * Return: int
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1len = 0, i, s2len = 0, j;
char *result;
        
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*s1 != '\0')
{
s1len++;
s1++;
}
for (i = 0; i < s1len; i++)
s1--;
while (*s2 != '\0')
{
s2len++;
s2++;
}
for (i = 0; i < s2len; i++)
s2--;
if (n > s2len)
n = s2len;
result = malloc(s1len + n + 1);
if (result == NULL)
return (NULL);
for (i = 0; i < s1len; i++)
result[i] = s1[i];
for (j = 0; j < n; j++)
{
result[i] = s2[j];
i++;
}
result[i] = '\0';
return (result);
}

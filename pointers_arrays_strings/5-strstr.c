#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strstr - Entry point
 *
 * @haystack: aaa
 * @needle: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strstr(char *haystack, char *needle)
{
char *aux;
char *aux2;

if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
if (*haystack == needle[0])
{
aux = haystack;
aux2 = needle;
while ((*aux == *aux2)&&(*aux2 != '\0'))
{
aux++;
aux2++;
}
if (*aux2 == '\0')
return (haystack);    
}
haystack++;
}
return ('\0');
}

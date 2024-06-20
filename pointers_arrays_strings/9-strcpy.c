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
int _strlen(char *s)
{
const char *p;

if (s == NULL)
return (0);
p = s;
while (*p != '\0')
p++;
return (p - s);
}


/**
 * _strcpy - Entry point
 *
 * @dest: aaa
 * @src: aa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strcpy(char *dest, char *src)
{
int l;
int i;

l = _strlen(dest);
for (i = 0; i <= l;i++)
dest[i] = src[i];    
return dest;
}

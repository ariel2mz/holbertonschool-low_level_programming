#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strlen - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: void
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
 * _atoi - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
int _atoi(char *s)
{
int i = 1;
int num = 0;
 int l; 

l = _strlen(s);
while (*s != '\0')
{
s++;
}
s--;
for (; l >= 0; l--)
{
if (*s - '0' > 10)
{
num = num + ((*s - '0') * i);
s--;
if (*s == '-' || *s == '+')
{
break;
}
i = i * 10;
l--;
}
else
{
s--;
l--;
}
}
if (*s == '-')
num = -num;


return (num);
}
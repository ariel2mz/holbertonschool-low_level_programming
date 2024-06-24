#include "main.h"
#include <stdio.h>
/**
 * _atoi - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
int _atoi(char *s)
{
const char *p;
int l, i, num = 0, neg = 1;

p = s;
while (*p != '\0')
p++;
l = p - s;
for (i = 0; i <= l; i++)
{
if (*s == '-')
{
neg = -neg;
}
if (*s >= 48 && *s <= 58)
{
if (num != 0)
num = num * 10;
if (neg == -1)
num = num - (*s - '0');
else
num = num + (*s - '0');
s++;
if (*s == ' ')
break;
s--;
}
s++;
}
return (num);
}

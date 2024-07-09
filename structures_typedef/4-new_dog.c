#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/* more headers goes there */

/**
 * _strncpy - Entry point
 *
 * @dest: aaa
 * @src: aaa
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
char *a = dest;
int l;
const char *p;

p = src;
while (*p != '\0')
p++;
l = p - src;


for (i = 0; i < n; i++)
{
if (i > l)
*a = '\0';
else
*a = *src;
a++;
src++;
}
return (dest);
}

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

/* more headers goes there */

/**
 * print_dog - Entry point
 *
 * @d: bsada
 * Description: 'Escribe un texto'
 * Return: int
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = malloc(sizeof(_strlen(name)) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return NULL;
}
new_dog->owner = malloc(sizeof(_strlen(owner)) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return NULL;
}


new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
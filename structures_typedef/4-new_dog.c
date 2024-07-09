#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>


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
for (i = 0; i <= l; i++)
dest[i] = src[i];
return (dest);
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
new_dog->name = malloc(_strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return NULL;
}
new_dog->owner = malloc(_strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return NULL;
}

_strcpy(new_dog->name, name);
_strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);


}
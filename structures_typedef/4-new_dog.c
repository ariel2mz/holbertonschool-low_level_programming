#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/* more headers go here */

/**
 * _strlen - Calculate the length of a string
 *
 * @s: The string to measure
 * Description: Returns the length of a string
 * Return: Length of the string
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
 * _strcpy - Copy a string
 *
 * @dest: Destination buffer
 * @src: Source string
 * Description: Copies the string pointed to by src to dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/* more headers go here */

/**
 * new_dog - Create a new dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: Creates a new dog structure and initializes its fields
 * Return: Pointer to the new dog structure, or NULL on failure
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
return (NULL);
}
new_dog->owner = malloc(_strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
_strcpy(new_dog->name, name);
_strcpy(new_dog->owner, owner);
new_dog->age = age;
return new_dog;
}

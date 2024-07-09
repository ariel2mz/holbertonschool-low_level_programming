#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>



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
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;

}
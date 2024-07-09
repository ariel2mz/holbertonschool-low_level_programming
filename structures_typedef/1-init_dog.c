#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/* more headers goes there */

/**
 * init_dog - Entry point
 *
 * @d: bsada
 * @name: asdasdasds
 * @age: adsadas
 * @owner: adsadas
 * Description: 'Escribe un texto'
 * Return: int
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}

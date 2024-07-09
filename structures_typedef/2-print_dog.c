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
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}


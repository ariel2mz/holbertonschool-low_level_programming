#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/* more headers go here */

/**
 * new_dog - Create a new dog
 *
 * @d: Name of the dog
 * Description: Creates a new dog structure and initializes its fields
 * Return: Pointer to the new dog structure, or NULL on failure
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}

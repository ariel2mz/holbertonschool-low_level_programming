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
  free(d->name);
  free(d->owner);
  free(d);
}

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure to represent a dog
 * @name: Name of the dog
 * @age: Age of the dog in years
 * @owner: Owner of the dog
 *
 * Description: A structure to store information about a dog, including
 * its name, age, and owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif


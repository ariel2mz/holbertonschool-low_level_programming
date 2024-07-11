#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>

/* more headers go here */

/**
 * int_index - Calculate the length of a string
 *
 * @array: The string to measure
 * @size: aaaaa
 * @cmp: asdsadsa
 * Description: Returns the length of a string
 * Return: Length of the string
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp == NULL)
return (-1);
if (array == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
return (i);
}
return (-1);
}

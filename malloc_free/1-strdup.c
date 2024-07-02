#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * create_array - Entry point
 *
 * @size: aaa
 * @c: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strdup(char *str)
{
  unsigned int i = 0;
 unsigned int x;
 char *result;

 if (str == NULL)
   return NULL;
 if (*str == '\0')
   {
     result = malloc(1);
   return(result);
   } 
 while (*str != '\0'){
   i++;
     str++;
 }
 for (x = 0; x < i; x++)
   str--;
 result = malloc((i + 1) * sizeof(char));
 for (x = 0; x < i; x++){
  result[x] = str[x];
 }
return (result);
}

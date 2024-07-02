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

 while (*str != '\0'){
   i++;
     str++;
 }
 for (x = 0; x < i; x++)
   str--;
 printf("%d\n", i);
 result = malloc((i + 1) * sizeof(char));
if (i == 0)
return (NULL);
 for (x = 0; x < i; x++){
  result[x] = str[x];
  printf("%c\n", str[x]);
 }
 printf("%s\n", result);
return (result);
}

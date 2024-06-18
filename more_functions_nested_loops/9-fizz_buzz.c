#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * fizz_buzz - Entry point
 *
 * Description: 'Escribe un texto'
 * @c: caracter a revisar
 * Return: void
 */
void fizz_buzz(void)
{
for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
if ((i % 5) == 0)
printf("FizBuzz ");
else
printf("Fizz ");
}
else if ((i % 5) == 0)
printf("Buzz ");
else
printf("%d ", i);
}
}
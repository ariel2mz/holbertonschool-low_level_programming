#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'Escribe un texto'
 * Return: void
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
if ((i % 5) == 0)
printf("FizzBuzz");
else
printf("Fizz");
}
else if ((i % 5) == 0)
printf("Buzz");
else
printf("%d ", i);
if (i != 100)
printf(" ")

}
return (0);
}

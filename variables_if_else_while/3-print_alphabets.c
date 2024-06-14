#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'Escribe un texto'
 * Return: Always 0 (Success)
 */
int main(void)
{
char abecedario;

for (abecedario = 'a'; abecedario <= 'z'; abecedario++)
putchar(abecedario);
for (abecedario = 'A'; abecedario <= 'Z'; abecedario++)
putchar(abecedario);
putchar('\n');
return (0);
}
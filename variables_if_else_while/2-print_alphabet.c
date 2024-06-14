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
putchar(' ');
return (0);
}

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

for (abecedario = 'z'; abecedario >= 'a'; abecedario--)
putchar(abecedario);
putchar('\n');
return (0);
}

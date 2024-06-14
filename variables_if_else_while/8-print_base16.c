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
int i;
char alp;

for (i = 48; i <= 57; i++)
putchar(i);
for (alp = 'a'; alp <= 'f'; alp++)
putchar(alp);
putchar('\n');
return (0);
}

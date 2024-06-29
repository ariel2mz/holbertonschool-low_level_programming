#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * @argc: aaa
 * @argv: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */


int main(int argc, char *argv[])
{
int i;

for (i = 0;i < argc;i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
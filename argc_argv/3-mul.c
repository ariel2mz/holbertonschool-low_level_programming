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
int result;
int a;
int b;


if (argc != 3)
return (1);
printf("%d\n", *argv[1]);
*argv[1]++;
printf("%d\n", *argv[1]);

result = ((*argv[1] - '0')*(*argv[2] - '0'));

return(result);
}
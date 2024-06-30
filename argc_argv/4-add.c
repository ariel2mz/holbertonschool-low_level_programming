#include <stdio.h>
#include <stdlib.h>

/**
* main - asdsad
* @argc: fsadas
* @argv: aaa
*
* Description: asdasdsadasda
*
* Return: 0 on succes
*/
int main(int argc, char *argv[])
{
int i, j;
int result;
  
if (argc == 1)
{
printf("0\n");
return (0);
}
else
{
result = 0;
for (i = 1; i < argc; i++)
{
j = 0;
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
result = result + atoi(argv[i]);
}
}
printf("%d", result);
printf("\n");
return (0);
}
}

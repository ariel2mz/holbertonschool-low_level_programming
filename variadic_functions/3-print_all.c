void print_all(const char * const format, ...)
{
va_list args;
char * str;
char aux;

while (ptr[i])
        {
switch (ptr[i])
            {
                case 'c':
                    
                    printf("%c", va_arg(args, char));
                    break;
                case 'i':
                    printf("%d", va_arg(args, int));
                    break;
                case 'f':
                    printf("%f", va_arg(args, float));
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (str == NULL)
                        str = "(nil)";
                    printf("%s", str);
                    break;
}
 if (ptr[i + 1] != NULL)
 {
    aux = ptr[i];
    if (aux == 'c' || aux == 'i' || aux == 'f' || aux ==  's')
    printf(", ");
 }
 i++;
        }
}
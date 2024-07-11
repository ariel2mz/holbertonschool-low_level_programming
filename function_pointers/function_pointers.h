#ifndef FUNCTIONS_H
#define FUNCTIONS_H
void print_name(char *name, void (*f)(char *));
void print_name_uppercase(char *name);
void print_name_as_is(char *name);
void print_elem_hex(int elem);
void print_elem(int elem);
void array_iterator(int *array, size_t size, void (*action)(int));
int abs_is_98(int elem);
int is_strictly_positive(int elem);
int is_98(int elem);
#endif

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h){

  size_t contador = 0;
  
  while (h != NULL){
    printf("[%d] %s\n",  h->len, h->str);
    h = h->next;
    contador++;
  }
}

#include <stdlib.h>
#include <stdio.h>

#define fmt "%d "
typedef int Item;
typedef struct  no {
    Item item;
    struct no *prox;
} *Lista;

Lista no(Item x, Lista p){
    Lista n = (struct no *) malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe(Lista L) {
    while (L != NULL) {
        printf(fmt, L->item);
        L = L->prox;
    }
    printf("\n");
}

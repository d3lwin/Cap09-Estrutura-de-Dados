#include <stdio.h>
#include "lista.h"

int somar(Lista L) {
    if (L == NULL) {return 0;}
    return L->item + somar(L->prox);
}

int main() {
    Lista L =no(1,no(2,no(1,no(3,no(1,NULL)))));
    int soma = somar(L);
    printf("o total é %d\n", soma);
    return 0;
}
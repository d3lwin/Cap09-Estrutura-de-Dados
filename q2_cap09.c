#include <stdio.h>
#include "lista.h"

int substitui(Lista L, int x) {
    int contador = 0;
    while (L != NULL) {
        if (L->item == x) {
            contador++;
        };
        L = L->prox;
    }
    return contador;
}

int main() {
    Lista L =no(1,no(2,no(1,no(3,no(1,NULL)))));
    int contador = substitui(L, 1);
    printf("A quantidade é %d\n", contador);
    return 0;
}

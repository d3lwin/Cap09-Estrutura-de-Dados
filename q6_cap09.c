#include <stdio.h>
#include "lista.h"

void substitui(Lista L, int x, int y) {
    while (L != NULL) {
        if (L->item == x) {
            L->item=y;
        };
        L = L->prox;
    }
}

int main() {
    Lista L =no(1,no(2,no(1,no(3,no(1,NULL)))));
    exibe(L);
    substitui(L, 1, 3);
    exibe(L);
    return 0;
}
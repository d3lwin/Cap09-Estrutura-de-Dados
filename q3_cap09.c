#include <stdio.h>
#include "lista.h"

int ultimo(Lista L) {
    while (L != NULL) {
        if (L->prox == NULL) {
            return L->item;
        };
        L = L->prox;
    }
}

int main() {
    Lista L =no(1,no(2,no(1,no(3,no(1,NULL)))));
    printf("O último item é %d\n", ultimo(L));
    return 0;
}

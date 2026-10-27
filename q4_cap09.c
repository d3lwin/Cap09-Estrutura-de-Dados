#include <stdio.h>
#include "lista.h"

Lista inversa(Lista L) {
    if (L == NULL || L->prox == NULL) {
        return L;
    }

    Lista nova_cabeca = inversa(L->prox);
    L->prox->prox = L;
    L->prox = NULL;

    return nova_cabeca;
}

int main() {
    Lista L =no(1,no(2,no(1,no(3,no(1,NULL)))));
    exibe(L);
    L = inversa(L);
    exibe(L);
    return 0;
}

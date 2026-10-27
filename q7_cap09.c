#include <stdio.h>
#include "lista.h"

int igual(Lista L, Lista W) {
    if (L == NULL && W == NULL) {
        return 1;
    }
    if (L == NULL || W == NULL) {
        return 0;
    }
    if (L->item != W->item) {
        return 0;
    }
    return igual(L->prox, W->prox);
}

int main() {
    Lista L =no(1,no(2,no(1,no(3,no(1,NULL)))));
    Lista W =no(4,no(2,no(1,no(3,no(1,NULL)))));
    Lista R =no(1,no(2,no(1,no(3,no(1,NULL)))));
    printf("%d\n", igual(L, W));
    printf("%d\n", igual(L, R));
    return 0;
}
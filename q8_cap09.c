#include <stdio.h>
#include "lista.h"

int enesimo(Lista L, int n, int contador) {
    if (contador != n) {
        return enesimo(L->prox, n, contador+1);
    } else { return L->item; }
}

int main() {
    Lista L =no(1,no(2,no(1,no(3,no(1,NULL)))));
    int n = 2;
    int enesimo_item = enesimo(L, n, 1);
    printf("O elemento %d é %d\n", n, enesimo_item);
    return 0;
}
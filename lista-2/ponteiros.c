// Declare uma variável inteira, um ponteiro para ela e imprima o valor da variável e
// seu endereço usando o ponteiro.

#include <stdio.h>

int main() {
    int var = 42;
    int *p = &var;

    printf("Valor da variável: %d\n", *p);
    printf("Endereço da variável: %p\n", (void*)p);

    return 0;
}

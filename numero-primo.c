#include "stdlib.h"
#include "stdio.h"

int main() {
    int numero, divisor, ehPrimo = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0;
    }

    for (divisor = 2; divisor * divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            ehPrimo = 0;
            break;
        }
    }

    if (ehPrimo) {
        printf("%d eh primo\n", numero);
    } else {
        printf("%d nao eh primo\n", numero);
    }

    return 0;
}

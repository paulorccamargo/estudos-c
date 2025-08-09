#include "stdlib.h"
#include "stdio.h"

int encontrarMaiorValor(int numeros[], int tamanho) {
    int i, maior = numeros[0];
    for (i = 1; i < tamanho; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    return maior;
}

int main() {
    int quantidade, i;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &quantidade);

    int valores[quantidade];
    for (i = 0; i < quantidade; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int maiorValor = encontrarMaiorValor(valores, quantidade);
    printf("O maior valor do array é: %d\n", maiorValor);

    return 0;
}

#include <stdio.h>

float calcula_media(float notas[5]) {
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }
    return soma / 5;
}

int main() {
    float notas[5];

    printf("Digite as 5 notas do aluno:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float media = calcula_media(notas);
    printf("Média do aluno: %.2f\n", media);

    return 0;
}

#include <stdio.h>

int main() {
    float horas, valor_hora, salario;

    printf("Digite o número de horas trabalhadas na semana: ");
    scanf("%f", &horas);
    printf("Digite o valor da hora: ");
    scanf("%f", &valor_hora);

    if (horas <= 40) {
        salario = horas * valor_hora;
    } else if (horas <= 60) {
        salario = 40 * valor_hora + (horas - 40) * valor_hora * 1.5;
    } else {
        salario = 40 * valor_hora + 20 * valor_hora * 1.5 + (horas - 60) * valor_hora * 2;
    }

    printf("Salário semanal: R$ %.2f\n", salario);

    return 0;
}

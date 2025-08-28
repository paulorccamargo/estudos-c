// Faça uma função void swap(int *a, int *b) que troque os valores de duas variáveis

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}

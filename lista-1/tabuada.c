#include "stdlib.h"
#include "stdio.h"

int main()
{
    int numeroMultiplicando;
    printf("Digite o numero multiplicando da tabuada que deseja: ");
    scanf("%d", &numeroMultiplicando);

    for(int multiplicador = 0; multiplicador <= 10; multiplicador++)
    {
        int produtoDeFatores = numeroMultiplicando * multiplicador;
        printf("%d X %d = %d \n", numeroMultiplicando, multiplicador, produtoDeFatores);
    }
    return 0;
}
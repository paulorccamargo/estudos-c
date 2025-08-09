#include "stdlib.h"
#include "stdio.h"

int main()
{
    int numeroMultiplicando = 9;

    for(int multiplicador = 0; multiplicador <= 10; multiplicador++)
    {
        int produtoDeFatores = numeroMultiplicando * multiplicador;
        printf("%d X %d = %d \n", numeroMultiplicando, multiplicador, produtoDeFatores);
    }
    return 0;
}
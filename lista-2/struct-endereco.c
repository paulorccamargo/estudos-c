// Crie uma struct Endereco (rua, número, cidade) e inclua dentro da struct Pessoa.
// Crie uma função que recebe um struct Pessoa e imprime seu endereço.

#include <stdio.h>

typedef struct
{
    char rua[100];
    int numero;
    char cidade[100];
} Endereco;

typedef struct
{
    char nome[100];
    Endereco endereco;
} Pessoa;

void imprimirEndereco(Pessoa p)
{
    printf("Rua: %s\n", p.endereco.rua);
    printf("Número: %d\n", p.endereco.numero);
    printf("Cidade: %s\n", p.endereco.cidade);
}

int main()
{
    Pessoa pessoa = {
        "João",
        {"Av. Brasil", 123, "Rio de Janeiro"}};

    imprimirEndereco(pessoa);

    return 0;
}

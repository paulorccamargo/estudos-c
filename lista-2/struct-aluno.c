#include <stdio.h>
#include <string.h>

struct ALUNO
{
    int numeroMatricula;
    char nome[50];
    int idade;
};

int main()
{
    struct ALUNO paulo;

    paulo.numeroMatricula = 12345;
    strcpy(paulo.nome, "Paulo Ricardo");
    paulo.idade = 50;

    printf("Matricula: %d\n", paulo.numeroMatricula);
    printf("Nome: %s\n", paulo.nome);
    printf("Idade: %d\n", paulo.idade);

    return 0;
}

#include <stdio.h>

/*
 Ler 10 notas de um aluno, armazenados num array e exibir a média dessas notas.
*/
int main()
{
    float notasAluno[10];
    float somaNotas = 0;
    float mediaFinal;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite a nota %d: ", i+1);
        scanf("%f", &notasAluno[i]);
        somaNotas += notasAluno[i];
    }

    mediaFinal = somaNotas / 10;
    printf("\nSua media final foi de %.2f", mediaFinal);

    return 0;
}
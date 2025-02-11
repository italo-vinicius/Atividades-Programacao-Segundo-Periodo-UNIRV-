#include <stdio.h>

/*
 Implementar um programa para ler 5 notas de alunos e imprimi-las.
*/
int main()
{
    int notas[5];
    int notaDigitada;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite sua nota: ");
        scanf("%d", &notaDigitada);
        notas[i] = notaDigitada;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", notas[i]);
    }

    return 0;
}

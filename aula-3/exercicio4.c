#include <stdio.h>

/*
 Implementar um programa que, dado um vetor de 7 posições, de números inteiros, mostre na tela:
 - Somente elementos Pares e a soma deles;
 - Somente elementos Ímpares e a soma deles.
*/

int main()
{
    int numerosSelecionados[7];
    int somaPares = 0;
    int somaImpares = 0;

    for (int i = 0; i < 7; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &numerosSelecionados[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        if (numerosSelecionados[i] % 2 == 0)
        {
            printf("\n%d e um numero par", numerosSelecionados[i]);
            somaPares += numerosSelecionados[i];
        }
    }

    printf("\nA soma dos pares foi de %d", somaPares);

    printf("\n\n---------------------------\n\n");

    for (int i = 0; i < 7; i++)
    {
        if (numerosSelecionados[i] % 2 != 0)
        {
            printf("\n%d e um numero impar", numerosSelecionados[i]);
            somaImpares += numerosSelecionados[i];
        }
    }

    printf("\nA soma dos impares foi de %d", somaImpares);

    return 0;
}
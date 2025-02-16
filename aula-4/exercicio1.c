#include <stdio.h>

/*
    Criar e preencher um vetor de 15 posições. Após isso o usuário deverá informar
    um valor inteiro. O programa deverá verificar se o valor informado encontra-se
    no vetor, e se sim, informar qual sua posição.
*/
int main()
{
    int numerosAleatorios[15] = {1, 4, 7, 5, 2, 44, 66, 22, 32, 8, 130, 25, 345, 25, 23};
    int numeroChutado;

    printf("Chute um numero: ");
    scanf("%d", &numeroChutado);

    for (int i = 0; i < 15; i++)
    {
        if (numerosAleatorios[i] == numeroChutado)
        {
            printf("\nSim, o numero %d esta no vetor na posicao %d", numeroChutado, i + 1);
        }
    }

    return 0;
}
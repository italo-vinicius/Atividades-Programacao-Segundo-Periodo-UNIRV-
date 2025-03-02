#include <stdio.h>

/*
 Criar uma matriz 10x3 onde deverá ser realizada a tabuada, onde o valor a ser multiplicado,
 será informado pelo usuário. Exemplo:
    1,  3, 3
    2,  3, 6
    3,  3, 9
    4,  3, 12
    5,  3, 15
    6,  3, 18
    7,  3, 21
    8,  3, 24
    9,  3, 27
    10, 3, 30
*/
int main()
{
    int multiplicador;
    int tabuadaMultiplicacao[10][3];

    printf("Digite o valor a ser multiplicado na tabuada: ");
    scanf("%d", &multiplicador);

    for (int i = 0; i < 10; i++)
    {
        tabuadaMultiplicacao[i][0] = i + 1;
        tabuadaMultiplicacao[i][1] = multiplicador;
        tabuadaMultiplicacao[i][2] = (i + 1) * multiplicador;

        printf("%d %d %d\n", tabuadaMultiplicacao[i][0], tabuadaMultiplicacao[i][1], tabuadaMultiplicacao[i][2]);
    }

    return 0;
}
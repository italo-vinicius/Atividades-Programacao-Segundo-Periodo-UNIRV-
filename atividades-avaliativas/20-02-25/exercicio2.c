#include <stdio.h>

/*
 Crie um vetor de 10 posições que será preenchido de forma aleatória com valores de 0 a 10.
 A partir desse vetor, construa um novo com a seguinte lógica:
 novoVetor = [indice0+indice1, indice2+indice3, indice4+indice5, …, indiceN-1+indiceN ]
 Por exemplo, considere o seguinte vetor:
 vetor = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
 O resultado do novo vetor, utilizando a lógica proposta:
 novoVetor = [1+2, 3+4, 5+6, 7+8, 9+10] =&gt; [3, 7, 11, 15, 19]
*/
int main()
{
    int vetorNumsAleatorios[10];
    int novoVetor[5];
    int contPosicaoNovoVetor = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nPreencha a posicao %d do vetor: ", i + 1);
        scanf("%d", &vetorNumsAleatorios[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            novoVetor[contPosicaoNovoVetor] = vetorNumsAleatorios[i] + vetorNumsAleatorios[i + 1];

            printf("\n%d", novoVetor[contPosicaoNovoVetor]);

            contPosicaoNovoVetor++;
        }
    }

    return 0;
}
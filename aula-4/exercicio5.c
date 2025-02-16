#include <stdio.h>

/*
 Crie 2 vetores de 10 posições de tipo inteiro. Realiza o seguinte cálculo,
 armazenando em um vetorC:

 Primeira posição do vetorA + última índice vetorB;
 Segundo índice do vetorA + penúltima índice do vetor B;
 ...
 Último índice do vetorA + primeiro índice do vetorB.
*/
int main()
{
    int vetorA[10] = {1, 3, 5, 7, 9, 10, 14, 36, 27, 30};
    int vetorB[10] = {3, 6, 7, 13, 16, 18, 27, 24, 25, 26};
    int vetorC[10];

    for (int i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[9 - i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetorC[i]);
    }

    return 0;
}
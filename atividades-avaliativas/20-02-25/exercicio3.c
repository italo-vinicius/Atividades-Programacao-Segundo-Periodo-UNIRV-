#include <stdio.h>

/*
 Faça um programa para ler 10 números únicos a serem armazenados em um vetor, num
 intervalo entre 1 e 25.
 Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
 o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir
 para ele digitar outro número.Ao final deverá ser mostrado na tela o vetor final que
 foi digitado.
*/
int main()
{
    int vetorNums[10];
    int numeroDigitado, repetido;

    for (int i = 0; i < 10; i++)
    {
        do
        {
            repetido = 0;

            printf("\nDigite um número único entre 1 e 25 para a posição %d do vetor: ", i + 1);
            scanf("%d", &numeroDigitado);

            if (numeroDigitado < 1 || numeroDigitado > 25)
            {
                printf("\nNúmero inválido! Digite um número entre 1 e 25.\n");
                repetido = 1;
                continue;
            }

            for (int j = 0; j < i; j++)
            {
                if (vetorNums[j] == numeroDigitado)
                {
                    printf("\nO número já está no vetor! Digite outro número.\n");
                    repetido = 1;
                    break;
                }
            }
        } while (repetido);

        vetorNums[i] = numeroDigitado;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetorNums[i]);
    }

    return 0;
}
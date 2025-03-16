#include <stdio.h>
#include <stdlib.h>

/*
    Crie um array tridimensional de 3x1920x1080 (camadas, linhas, colunas) do tipo inteiro que representam
    camadas de uma imagem RGB, sendo camada RGB, largura e altura. preencha o array com valores aleatórios
    entre 1 e 255 para representar os pixels. Após isso, o usuário deverá escolher uma camada para ser impressa
    na tela, sendo:
    R - Red (camada 0);
    G - Green (camada 1);
    B - Blue (camada 2).

    Obs: Considere somente letras maiusculas.
*/
int main()
{
    int arrayTridimensional[3][1080][1920];
    char camadaEscolhida;
    int indiceCamada;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1080; j++)
        {
            for (int k = 0; k < 1920; k++)
            {
                arrayTridimensional[i][j][k] = rand() % 255 + 1;
            }
        }
    }

    printf("Escolha a letra correspondente a camada para imprimir [R = RED / G = GREEN / B = BLUE]:\n");
    scanf(" %c", &camadaEscolhida);

    switch (camadaEscolhida)
    {
        case 'R':
            indiceCamada = 0;
            break;

        case 'G':
            indiceCamada = 1;
            break;

        case 'B':
            indiceCamada = 2;
            break;

        default:
            printf("Camada inválida!\n");
            return 0;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        { 
            printf("%3d ", arrayTridimensional[indiceCamada][i][j]);
        }
        printf("\n");
    }

    return 0;
}
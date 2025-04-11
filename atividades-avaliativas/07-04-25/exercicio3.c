#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 25

int matriz[TAMANHO][TAMANHO];
int vetor[TAMANHO * TAMANHO];

int main()
{
    int op, N, aux;
    char metodo;

    while (1)
    {
        printf("\nBem vindo usuario. Escolha uma das opcoes abaixo\n");
        printf("==========================");
        printf("\n1 - Preencher Matriz");
        printf("\n2 - Ordenar Matriz Crescente");
        printf("\n3 - Ordenar Matriz Decrescente");
        printf("\n4 - Exibir Matriz");
        printf("\n0 - Sair\n");
        printf("==========================");
        printf("\nOpcao: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Informe o valor maximo (N) para preencher a matriz: ");
            scanf("%d", &N);
            for (int i = 0; i < TAMANHO; i++)
            {
                for (int j = 0; j < TAMANHO; j++)
                {
                    matriz[i][j] = rand() % N + 1;
                }
            }
            printf("Matriz preenchida com sucesso!\n");
            break;

        case 2:
        case 3:
            printf("Escolha o metodo de ordenacao (B - Bubble, I - Insertion, S - Selection): ");
            scanf(" %c", &metodo);

            int k = 0;
            for (int i = 0; i < TAMANHO; i++)
            {
                for (int j = 0; j < TAMANHO; j++)
                {
                    vetor[k++] = matriz[i][j];
                }
            }

            if (metodo == 'B' || metodo == 'b')
            {
                for (int i = 0; i < TAMANHO * TAMANHO; i++)
                {
                    for (int j = 0; j < TAMANHO * TAMANHO - 1; j++)
                    {
                        if ((op == 2 && vetor[j] > vetor[j + 1]) || (op == 3 && vetor[j] < vetor[j + 1]))
                        {
                            aux = vetor[j];
                            vetor[j] = vetor[j + 1];
                            vetor[j + 1] = aux;
                        }
                    }
                }
            }
            else if (metodo == 'I' || metodo == 'i')
            {
                for (int i = 1; i < TAMANHO * TAMANHO; i++)
                {
                    int chave = vetor[i];
                    int j = i - 1;
                    while (j >= 0 && ((op == 2 && vetor[j] > chave) || (op == 3 && vetor[j] < chave)))
                    {
                        vetor[j + 1] = vetor[j];
                        j--;
                    }
                    vetor[j + 1] = chave;
                }
            }
            else if (metodo == 'S' || metodo == 's')
            {
                for (int i = 0; i < TAMANHO * TAMANHO - 1; i++)
                {
                    int posicao = i;
                    for (int j = i + 1; j < TAMANHO * TAMANHO; j++)
                    {
                        if ((op == 2 && vetor[j] < vetor[posicao]) || (op == 3 && vetor[j] > vetor[posicao]))
                        {
                            posicao = j;
                        }
                    }

                    aux = vetor[i];
                    vetor[i] = vetor[posicao];
                    vetor[posicao] = aux;
                }
            }
            else
            {
                printf("Metodo invalido.\n");
                break;
            }

            k = 0;
            for (int i = 0; i < TAMANHO; i++)
            {
                for (int j = 0; j < TAMANHO; j++)
                {
                    matriz[i][j] = vetor[k++];
                }
            }

            printf("Matriz ordenada com sucesso!\n");
            break;

        case 4:
            for (int i = 0; i < TAMANHO; i++)
            {
                for (int j = 0; j < TAMANHO; j++)
                {
                    printf("%4d ", matriz[i][j]);
                }
                printf("\n");
            }
            break;

        case 0:
            printf("Programa Encerrado.\n");
            return 0;

        default:
            printf("Opcao invalida!\n");
            break;
        }
    }

    return 0;
}
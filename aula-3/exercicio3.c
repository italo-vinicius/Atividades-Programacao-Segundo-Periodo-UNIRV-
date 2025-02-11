#include <stdio.h>

/*
 Criar um programa que leia 5 valores reais e armazene num vetor.
 Mostre na tela somente valores menores que 5.
*/
int main()
{
    int valores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if(valores[i] < 5)
        {
            printf("\nO valor %d e menor que 5", valores[i]);
        }
    }

    return 0;
}
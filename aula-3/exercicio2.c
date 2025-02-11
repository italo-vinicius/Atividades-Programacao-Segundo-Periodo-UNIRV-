#include <stdio.h>

/*
 Criar um programa que leia 5 valores inteiros e mostre na tela
 somente o último e primeiro elemento.
*/
int main()
{
    int valores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nPrimeiro valor digitado: %d", valores[0]);
    printf("\nUltimo valor digitado: %d", valores[4]);
}
#include <stdio.h>

/*
 Faça um programa que leia 10 números inteiros, armazene-os em um vetor,
 solicite ao usuário informar um valor inteiro qualquer e:
 - imprima os números do vetor que são maiores que o valor informado
 - retorne quantos números armazenados no vetor são menores que o valor informado
*/
int main()
{
    int vetorNumerosInteiros[10];
    int inteiroQualquer;
    int contNumsMenoresQueValorInformado = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero para a posicao %d do vetor: ", i + 1);
        scanf("%d", &vetorNumerosInteiros[i]);
    }

    printf("\nDigite um numeiro inteiro para fazer as comparacoes: ");
    scanf("%d", &inteiroQualquer);

    for (int i = 0; i < 10; i++)
    {
        if (vetorNumerosInteiros[i] > inteiroQualquer)
        {
            printf("\nO numero %d no vetor e maior que o numero que voce digitou (%d)...", vetorNumerosInteiros[i], inteiroQualquer);
        }
        
        if (vetorNumerosInteiros[i] < inteiroQualquer)
        {
            contNumsMenoresQueValorInformado++;
        }
    }

    printf("\n\nForam encontrados %d numeros no vetor menores que o valor que voce informou (%d)", contNumsMenoresQueValorInformado, inteiroQualquer);

    return 0;
}
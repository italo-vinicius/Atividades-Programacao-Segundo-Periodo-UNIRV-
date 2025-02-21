#include <stdio.h>

/*
Faça um programa que leia um vetor de 5 posições do tipo double que equivalem a valores em
reais(R$). Em seguida, o usuário deve informar se quer transformar esse vetor em dólar ou
euro e armazene-os em um outro vetor. Imprima o vetor original e o vetor convertido.
Considere US$1 (Dólar) = R$5.71 e 1€ (Euro) = R$ 6.23
*/
int main()
{
    double valoresReais[5];
    double valoresConvertidos[5];
    char cifra;

    for(int i = 0; i < 5; i++)
    {
        printf("\nDigite o valor %d: ", i + 1);
        scanf("%lf", &valoresReais[i]);
    }

    getchar();
    printf("\nVoce quer transformar os valores em dolar ou euro: [DIGITE A LETRA D(dolar) ou E(euro)]: ");
    scanf("%c", &cifra);

    if(cifra != 'D' && cifra != 'E')
    {
        printf("\nVALOR INVALIDO...%c", cifra);
        return 0;
    }

    for(int i = 0; i < 5; i++)
    {
        if(cifra == 'D')
        {
            valoresConvertidos[i] = valoresReais[i] * 5.71;
        }
        else
        {
            valoresConvertidos[i] = valoresReais[i] * 6.23;
        }

        printf("%.2lf ", valoresConvertidos[i]);
    }

    return 0;
}
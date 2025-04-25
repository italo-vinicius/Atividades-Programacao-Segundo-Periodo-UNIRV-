#include <stdio.h>

void imprimirImpares(int inicial, int final)
{
    for(int i = inicial; i <= final; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int valorInicial, valorFinal;

    printf("Digite o numero inicial: ");
    scanf("%d", &valorInicial);

    printf("\nDigite o numero final: ");
    scanf("%d", &valorFinal);

    imprimirImpares(valorInicial, valorFinal);

    return 0;
}

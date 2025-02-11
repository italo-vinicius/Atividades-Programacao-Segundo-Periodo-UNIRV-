#include <stdio.h>

int main()
{
    int valor1, valor2;
    char operacao;

    printf("DIgite o primeiro numero: ");
    scanf("%d", &valor1);

    printf("DIgite o segundo numero: ");
    scanf("%d", &valor2);

    printf("Informe a operacao que voce deseja realizar: [+, -, *, /] ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
        case '+':
            printf("A soma foi de %d", valor1 + valor2);
            break;

        case '-':
            printf("A subtracao foi de %d", valor1 - valor2);
            break;

        case '*':
            printf("A multiplicacao foi de %d", valor1 * valor2);
            break;

            case '/':
            printf("A divisao foi de %d", valor1 / valor2);
            break;

        default:
            printf("ERROR 500");
            break;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int notas[5];
    int notaDigitada;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite sua nota: ");
        scanf("%d", &notaDigitada);
        notas[i] = notaDigitada;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", notas[i]);
    }

    return 0;
}

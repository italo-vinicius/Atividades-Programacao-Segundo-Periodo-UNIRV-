#include <stdio.h>

int main()
{
    int valorDoUsuario, somaDosPrimos = 0;

    printf("Digite um valor entre 10 e 100: ");
    scanf("%d", &valorDoUsuario);

    if (valorDoUsuario >= 10 && valorDoUsuario <= 100)
    {
        for (int i = 10; i <= valorDoUsuario; i++)
        {
            int primo = 1;

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    primo = 0;
                    break;
                }
            }

            if (primo && i > 1)
            {
                somaDosPrimos = somaDosPrimos + i;
                printf("%d\n", i);
            }
        }

        printf("A soma total dos primos foi de: %d\n", somaDosPrimos);
    }
    else
    {
        printf("ERROR");
    }

    return 0;
}
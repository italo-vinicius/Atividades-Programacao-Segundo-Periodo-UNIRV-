#include <stdio.h>

int main()
{
    int senhaDigitada;
    int senhaCorreta = 5555;

    for (int i = 1; i <= 3; i++)
    {
        printf("Informe uma valor entre 1000 e 9999: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaCorreta)
        {
            printf("Senha correta\n");
            return 0;
        }
        else
        {
            if (i == 3)
            {
                printf("Acesso Bloqueado");
                return 0;
            }

            printf("Senha incorreta\n");
        }
    }

    return 0;
}
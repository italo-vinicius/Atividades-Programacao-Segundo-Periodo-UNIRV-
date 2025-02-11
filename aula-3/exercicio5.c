#include <stdio.h>

/*
 Criar um array de 10 posições, e preencha-os com valores aleatórios.
 Realize a soma de todos os elementos e mostre-os na tela.
*/
int main()
{
    int valoresAleatorios[10] = {1, 6, 8, 10, 33, 4, 2, 5, 11, 100};
    int somaTotal = 0;

    for (int i = 0; i < 10; i++)
    {
        somaTotal += valoresAleatorios[i];
    }
    
    printf("A soma total dos 10 elementos foi de %d", somaTotal);

    return 0;
}
#include <stdio.h>

int main()
{
    int array[10] = {7, 5, 2, 3, 6, 1, 9, 8, 0, 4};
    int j, chave;

    for (int i = 1; i < 10; i++) {
        chave = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > chave) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = chave;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
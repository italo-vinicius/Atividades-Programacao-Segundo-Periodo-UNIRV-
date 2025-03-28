#include <stdio.h>

int main()
{
    int maiorTemp;
    int n = 10;
    int arr[10] = {7, 5, 2, 3, 6, 1, 9, 8, 0, 4};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                maiorTemp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = maiorTemp;
            }
        }
    }

    printf("\nArray ordenado: \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int maiorTemp;
    int n = 10;
    int arr[10] = {7, 5, 2, 3, 6, 1, 9, 8, 0, 4};
    // int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char arrayOrdenado = 's';

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            arrayOrdenado = 'n';
            break;
        }
    }

    if(arrayOrdenado == 's')
    {
        printf("Array ja esta ordenado. O bubble sort nao sera executado. \n");
        return 0;
    }

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

    printf("\nArray ordenado apos bubble sort: \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
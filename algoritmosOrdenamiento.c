#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Arreglo original: \n");
    printArray(arr, n);
    int opcion;

    // Bucle para solicitar una opción válida al usuario
    do
    {
        printf("Seleccione un algoritmo de ordenamiento:\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Shell Sort\n");
        printf("5. Quick Sort\n");
        printf("0. Salir\n");

        printf("Ingrese el número correspondiente al algoritmo (0 para salir): ");

        // Verificación de entrada válida
        if (scanf("%d", &opcion) != 1)
        {
            printf("Entrada no válida. Por favor, ingrese un número.\n");
            clearScreen();
            while (getchar() != '\n')
                ; // Limpiar el búfer de entrada
            continue;
        }
        clearScreen();
        switch (opcion)
        {
        case 1:
            printf("Aplicando Bubble Sort:\n");
            bubbleSort(arr, n);
            break;
        case 2:
            printf("Aplicando Selection Sort:\n");
            selectionSort(arr, n);
            break;
        case 3:
            printf("Aplicando Insertion Sort:\n");
            insertionSort(arr, n);
            break;
        case 4:
            printf("Aplicando Shell Sort:\n");
            shellSort(arr, n);
            break;
        case 5:
            printf("Aplicando Quick Sort:\n");
            quickSort(arr, 0, n - 1);
            break;
        case 0:
            printf("Saliendo del programa.\n");
            return 0;
        default:
            printf("Opción no válida. Por favor, ingrese un número entre 0 y 5.\n");
            continue;
        }

        printf("Arreglo ordenado:\n");
        printArray(arr, n);
        printf("\n");

    } while (opcion != 0);

    return 0;
}

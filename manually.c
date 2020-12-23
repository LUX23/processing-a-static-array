#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int man()
{
    int n;
    printf("\tСоздание матрицы размером n*n. Введите значение n: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("\n\tВведите значения матрицы:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nВведите %d-ю строку %d-й столбец: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\tМатрица:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\t%d ", arr[i][j]);
        }
        printf("\n");
    }
    double a, k, m;
    double vec[n];
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if(i != j)
            a += arr[i][j];
        }
        m = a / n;
        vec[j] = m;
        a = 0;
    }
    printf("\n\tВектор:");
    k = vec[0];
    for (int j = 0; j < n; j++)
    {
        printf("\t%.2f ", vec[j]);
        if (k > vec[j])
        k = vec[j];
    }
    printf("\n\tМинимальный элемент вектора = ");
    printf("%.2f", k);
    return(0);
}

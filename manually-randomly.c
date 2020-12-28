// Размер массива вводит пользователь (значения случайны)
#include <stdio.h>
#include <stdlib.h>

int man_r()
{
    int n;
    printf("\tСоздание матрицы размером n*n. Введите значение n: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("\n\tМатрица:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand()%100;
            printf("\t%d ", arr[i][j]);
        }
        printf("\n");
    }

     float k, m, a, vec[n];
    for (int j = 0; j < n; j++) // среднее арифметическое по столбцам
    {
        a = 0;
        for (int i = 0; i < n; i++)
        {
            if(i != j) // исключая элемент на главной диагонали
            a += arr[i][j]; // сумма элементов столбца
        }
        m = a / (n - 1); // среднее арифметическое столбца
        vec[j] = m;
    }

    printf("\n\tВектор:");
    k = vec[0];
    for (int j = 0; j < n; j++)
    {
        printf("\t%.2f ", vec[j]);
        if (k > vec[j]) // поиск минимального элемента вектора
        k = vec[j];
    }

    printf("\n\tМинимальный элемент вектора = ");
    printf("%.2f", k);

    return(0);
}

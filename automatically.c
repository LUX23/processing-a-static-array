// Размер и значения массива уже заданы
#include <stdio.h>

int aut()
{
    int arr[3][3] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9},
                    };

    printf("\tМатрица:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d ", arr[i][j]);
        }
        printf("\n");
    }

    float m1, m2, m3, k;
    m1 = (arr[1][0] + arr[2][0]) / 2.00;
    m2 = (arr[0][1] + arr[2][1]) / 2.00;
    m3 = (arr[0][2] + arr[1][2]) / 2.00;
    // среднее арифметическое столбца

    printf("\n\tВектор:");
    float vec[3] = {m1, m2, m3};
    k = vec[0];

    for (int j = 0; j < 3; j++)
    {
        printf("\t%.2f ", vec[j]);
        if (k > vec[j]) // поиск минимального элемента вектора
            k = vec[j];
    }

    printf("\n\tМинимальный элемент вектора = ");
    printf("%.2f", k);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int man()
{
    int n;
    printf("\t�������� ������� �������� n*n. ������� �������� n: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("\n\t������� �������� �������:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\n������� %d-� ������ %d-� �������: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\t�������:\n");
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
    printf("\n\t������:");
    k = vec[0];
    for (int j = 0; j < n; j++)
    {
        printf("\t%.2f ", vec[j]);
        if (k > vec[j])
        k = vec[j];
    }
    printf("\n\t����������� ������� ������� = ");
    printf("%.2f", k);
    return(0);
}

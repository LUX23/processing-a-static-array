#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_CTYPE,"RUSSIAN");
    srand(time(NULL));
    int n, p;
    printf("Выберите метод ввода значений и размерности матрицы:\n"
           "\t1 - В программе будут заданные значения.\n"
           "\t2 - Введите размер матрицы и её значения.\n"
           "\t3 - Введите размер матрицы (значения будут случайными).\n");
    scanf("%d", &p);
    if (p == 1)
        aut();
    if (p == 2)
        man();
    if (p == 3)
        man_r();
    getch();
    return 0;
}

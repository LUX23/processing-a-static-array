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
    printf("�������� ����� ����� �������� � ����������� �������:\n"
           "\t1 - � ��������� ����� �������� ��������.\n"
           "\t2 - ������� ������ ������� � � ��������.\n"
           "\t3 - ������� ������ ������� (�������� ����� ����������).\n");
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

//Лабораторная работа 8

#include <stdio.h>

//Задание 2
int main() {
    int n, m;
    int s = 0;
    int k = 0;
    int chet = 0;
    int nechet = 0;

    printf("Введите значение m: ");
    scanf("%d", &m);
    printf("Введите значение n: ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++) {
        s += i;
        k++;

        if (i % 2 == 0) {
            chet++;
        } else {
            nechet++;
        }
    }

    printf("Количество чисел: %d\n", k);
    printf("Сумма: %d\n", s);
    printf("Среднее арифметическое: %.1f\n", (float)s / k);
    printf("Количество чётных чисел: %d\n", chet);
    printf("Количество нечётных чисел: %d\n", nechet);

    return 0;
}

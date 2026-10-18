//Лабораторная работа 8
#include <stdio.h>
#include <math.h>

//Домашнее задание. Вариант 22
int main() {
    double p = 1.0;
    for (int i = 1; i <= 100; i++) {
        double x = i * 0.1;
        p *= (1.0 + sin(x));
    }

    printf("Результат: %e\n", p);

    return 0;
}

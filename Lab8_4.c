// Лабораторная работа 8

#include <stdio.h>
#include <float.h>

//Задание 4
int main() {
    double a = -1;
    double b = 2;
    double h;

    printf("Введите значение h:");
    if (scanf("%lf", &h) !=1 || h < 0) {
        printf("Только положительное");
        return 1;
    }
    double min_y = DBL_MAX;
    double max_y = -DBL_MAX;
    double min_x = a;
    double max_x = a;

    printf("\n  x  |   y  \n");
    printf("-------|-------\n");

    for (double x = a; x <= b + h / 2.0; x += h) {
        double y = x*x*x*x - 2*x*x +1;
        printf("%6.2f | %6.4f\n", x, y);

        if (y<min_y) {
            min_y = y;
            max_y = x;
        }
        if (y>max_y) {
            max_y = y;
            min_y = x;
        }
    }
    printf("\nМинимум: y = %6.4f при x = %6.2f\n", min_y, min_x);
    printf("Максимум: y = %6.4f при x = %6.2f\n", max_y, max_x);
    return 0;
}
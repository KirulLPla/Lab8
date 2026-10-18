// Лабораторная работа 8

#include <stdio.h>

// Задание 1
int main() {
    printf("Подпункт 1 \n");
    int n;
    printf("Введите количество символов: ");
    scanf("%d",&n);
    putchar('!');
    for (int start=1; start<=n; start++) (putchar('*'));{
        putchar('!');
    }
    putchar('\n');
    printf("\nПодпункт 2 \n");
    int count;
    char ch1, ch2;

    printf("Введите количество символов: ");
    if (scanf("%d", &count) != 1) return 1;

    printf("Введите первый символ: ");
    if (scanf(" %c", &ch1) != 1) return 1;

    printf("Введите второй символ: ");
    if (scanf(" %c", &ch2) != 1) return 1;

    for (int start = 1; start <= count; start++) {
        if (start <= count / 2) {
            putchar(ch1);
        } else {
            putchar(ch2);
        }
    }
    putchar('\n');

    printf("\nПодпункт 3\n");
    int cd;
    char ch;

    printf("Введите количество символов: ");
    if (scanf("%d", &cd) != 1) return 1;

    printf("Введите символ: ");
    if (scanf(" %c", &ch) != 1) return 1;

    for (int start = 1; start <= cd; start++) {
        putchar(ch);
        putchar('!');
    }
    putchar('\n');
    return 0;

}


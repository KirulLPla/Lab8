#include <stdio.h>

int main(void) {
    int n;
    printf("Введите максимальную степень n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    printf("\n=== ТИП 1: int ===\n");
    int res_int = 1;
    for (int i = 0; i <= n; i++) {
        printf("2^%-2d = %12d\n", i, res_int);
        res_int *= 2;
    }

    printf("\n=== ТИП 2: unsigned int ===\n");
    unsigned int res_uint = 1;
    for (int i = 0; i <= n; i++) {
        printf("2^%-2d = %12u\n", i, res_uint);
        res_uint *= 2;
    }

    printf("\n=== ТИП 3: long long ===\n");
    long long res_ll = 1;
    for (int i = 0; i <= n; i++) {
        printf("2^%-2d = %22lld\n", i, res_ll);
        res_ll *= 2;
    }

    return 0;
}


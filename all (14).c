#include <stdio.h>

int min_max(const int a[], int n, int *lo, int *hi) {
    if (n <= 0 || a == NULL || lo == NULL || hi == NULL) {
        return 0;
    }

    int min_val = a[0];
    int max_val = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min_val) {
            min_val = a[i];
        }
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }

    *lo = min_val;
    *hi = max_val;
    return 1;
}

int main(void) {
    int a[] = {4, -2, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int lo = 99, hi = 99;

    if (min_max(a, n, &lo, &hi)) {
        printf("lo=%d hi=%d\n", lo, hi);
    } else {
        puts("Empty array");
    }

    return 0;
}

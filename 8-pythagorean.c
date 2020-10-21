#include <stdio.h>

int my_sqrt(int n);

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        printf("%d\n", my_sqrt(a * a + b * b));
    }
    return 0;
}

int my_sqrt(const int n) {
    if (n < 0)
        return -1;
    else if (n <= 1)
        return n;

    size_t lo = 0;
    size_t hi = n;
    size_t mid, mid2;

    do {
        mid = (lo + hi) >> 1u;
        mid2 = mid * mid;

        if (mid2 == n)
            return mid;

        if (mid2 > n)
            hi = mid;
        else
            lo = mid;
    } while (lo < hi - 1);

    return lo;
}

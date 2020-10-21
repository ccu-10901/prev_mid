//
// Created by Jason Zheng on 2020/10/15.
//

#include <stdio.h>

#define ARR_SIZE 94

size_t fib(size_t f[], int n);

int main(int argc, char **argv) {
    int n;
    size_t f[ARR_SIZE] = {[0]=0, [1]=1};

    while (scanf("%d", &n) != EOF) {
        if (n < 0 || n > ARR_SIZE) {
            fprintf(stderr, "Illegal Value: %d\n", n);
            continue;
        }

        printf("%zu\n", fib(f, n));
    }

    return 0;
}

size_t fib(size_t f[], int n) {
    /* f[n] has been calculated */
    if (f[n] != 0)
        return f[n];

    /* find the last calculated index */
    int i = 2;
    while (f[i] != 0)
        i++;

    /* build fibonacci array */
    for (; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

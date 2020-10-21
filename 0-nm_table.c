//
// Created by Jason Zheng on 2020/10/15.
//

#include <stdio.h>

void print_nm_table(int n, int m);

int main(int argc, char **argv) {
    int n, m;

    while (scanf("%d%d", &n, &m) != EOF) {
        print_nm_table(n, m);
    }

    return 0;
}

void print_nm_table(int n, int m) {
    /* table header */
    printf("    |");
    for (int i = n; i <= m; i++) {
        printf("%3d |", i);
    }
    printf("\n");

    /* table rows */
    for (int i = n; i <= m; i++) {
        printf("%3d |", i);
        for (int j = n; j <= m; j++) {
            printf("%3d |", i * j);
        }
        printf("\n");
    }
}

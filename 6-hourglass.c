#include <stdio.h>

void print_hourglass(int n);

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n <= 0 || n % 2 == 0) {
            printf("請輸入有效數字\n");
            continue;
        }

        print_hourglass(n);
    }

    return 0;
}

void print_star(int indent, int star) {
    for (int i = 0; i < indent; ++i) {
        printf(" ");
    }

    for (int i = 0; i < star; ++i) {
        printf("*");
    }
    printf("\n");
}

void print_hourglass(int n) {
    int mid_level = n / 2;

    /* upper */
    for (int i = 0; i <= mid_level; i++) {
        print_star(i, n - i * 2);
    }

    /* lower */
    for (int i = 1; i <= mid_level; i++) {
        print_star(mid_level - i, 1 + i * 2);
    }
}

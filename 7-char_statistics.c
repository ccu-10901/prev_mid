#include <stdio.h>

int main() {
    int n_alphas[26] = {0};
    int n_digits[10] = {0};
    int n_space = 0;
    int n_tab = 0;
    int n_ln = 0;
    int total = 0;

    /* ========== INPUT ========== */
    int c;
    while ((c = getchar()) != EOF) {
        total++;
        if (c >= 'A' && c <= 'Z') {
            int idx = c - 'A';
            n_alphas[idx]++;
        } else if (c >= 'a' && c <= 'z') {
            int idx = c - 'a';
            n_alphas[idx]++;
        } else if (c >= '0' && c <= '9') {
            int idx = c - '0';
            n_digits[idx]++;
        } else if (c == ' ') {
            n_space++;
        } else if (c == '\t') {
            n_tab++;
        } else if (c == '\n') {
            n_ln++;
        } else {
            /* do nothing */
        }
    }

    /* ========== OUTPUT ========== */
    printf("Alphabet statistics:\n");
    for (int i = 'a'; i <= 'z'; i++) {
        int cnt = n_alphas[i - 'a'];
        double freq = (double) cnt / total;
        printf("%c:\t%d\t%.4f\n", i, cnt, freq);
    }

    printf("Number statistics:\n");
    for (int i = '0'; i <= '9'; i++) {
        int cnt = n_digits[i - '0'];
        double freq = (double) cnt / total;
        printf("%c:\t%d\t%.4f\n", i, cnt, freq);
    }

    printf("Space count:\t%d\n", n_space);
    printf("Tab count:\t%d\n", n_tab);
    printf("Line count:\t%d\n", n_ln);

    return 0;
}

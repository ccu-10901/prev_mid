#include <stdio.h>

#define BUF_SIZE 16384

int main() {
    int max;
    int min;
    int sum;
    int buffer[BUF_SIZE];
    int n = 0;

    while (scanf("%d", buffer + n) != EOF) {
        n++;
    }

    max = min = sum = buffer[0];
    for (int i = 1; i < n; i++) {
        int num = buffer[i];
        sum += num;

        if (num > max)
            max = num;
        else if (num < min)
            min = num;
    }

    double avg = (double) sum / n;

    printf("Max: %d\n"
           "Min: %d\n"
           "Avg: %.2f\n",
           max, min, avg);
}

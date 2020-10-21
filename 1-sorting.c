//
// Created by Jason Zheng on 2020/10/15.
//

#include <stdio.h>

#define ARR_SIZE 10000

void bubble_sort(int arr[], int n);

void print_arr(int arr[], int n);

int main(int argc, char **argv) {
    int i = 0;
    int num;
    int arr[ARR_SIZE];

    /* input */
    while ((i < ARR_SIZE) && (scanf("%d", &num) != EOF)) {
        arr[i++] = num;
    }

    /* sort */
    bubble_sort(arr, i);

    /* print */
    print_arr(arr, i);

    return 0;
}

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                /* swap */
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void print_arr(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[n - 1]);
}
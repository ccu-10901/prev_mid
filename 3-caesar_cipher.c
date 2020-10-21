//
// Created by Jason Zheng on 2020/10/15.
//

#include <stdio.h>

int main(int argc, char **argv) {
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + 3) % 26) + 'A';
        } else if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + 3) % 26) + 'a';
        }
        printf("%c", c);
    }
}

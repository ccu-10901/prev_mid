#include <stdio.h>
#include <string.h>

#define BUF_SIZE 4096

int main() {
    char *terms[] = {"SE", "CE", "RLF", "OLE", "TLE", "MLE", "FLE", "RE", "WA", "AC"};
    char *full_names[] = {"System Error", "Compilation Error", "Restriction Library or Function",
                          "Output Limit Exceeded", "Time Limit Exceeded", "Memory Limit Exceeded",
                          "File Limit Exceeded", "Runtime Error", "Wrong Answer", "Accepted"};

    int max = 0;
    int counts[10] = {0};
    char buf[BUF_SIZE];

    while (scanf("%s", buf) != EOF) {
        for (int i = 0; i < 10; i++) {
            char *term = terms[i];
            if (strcmp(buf, term) == 0) {
                printf("%s\n", full_names[i]);
                int c = ++counts[i];

                if (c > max)
                    max = c;
                break;
            }

            if (i == 9) {
                printf("我不知道你知不知道欸\n");
            }
        }
    }

    if (max == 0)
        return 0;

    for (int i = 0; i < 10; i++) {
        if (counts[i] == max) {
            printf("%s\n", terms[i]);
        }
    }
}

#include <stdio.h>
#include <string.h>

#define BUF_SIZE 4096

int main() {
    char buf[BUF_SIZE];
    int counts[10] = {0};

    while ((scanf("%s", buf)) != EOF) {
        if ((strcmp(buf, "SE")) == 0) {
            printf("System Error\n");
            counts[0]++;
        } else if ((strcmp(buf, "CE")) == 0) {
            printf("Compilation Error\n");
            counts[1]++;
        } else if ((strcmp(buf, "RLF")) == 0) {
            printf("Restriction Library or Function\n");
            counts[2]++;
        } else if ((strcmp(buf, "OLE")) == 0) {
            printf("Output Limit Exceeded\n");
            counts[3]++;
        } else if ((strcmp(buf, "TLE")) == 0) {
            printf("Time Limit Exceeded\n");
            counts[4]++;
        } else if ((strcmp(buf, "MLE")) == 0) {
            printf("Memory Limit Exceeded\n");
            counts[5]++;
        } else if ((strcmp(buf, "FLE")) == 0) {
            printf("File Limit Exceeded\n");
            counts[6]++;
        } else if ((strcmp(buf, "RE")) == 0) {
            printf("Runtime Error\n");
            counts[7]++;
        } else if ((strcmp(buf, "WA")) == 0) {
            printf("Wrong Answer\n");
            counts[8]++;
        } else if ((strcmp(buf, "AC")) == 0) {
            printf("Accepted\n");
            counts[9]++;
        } else
            printf("我不知道你知不知道欸\n");
    }


    /* find the max */
    int max = counts[0];
    for (int i = 1; i < 10; i++) {
        if (counts[i] > max) {
            max = counts[i];
        }
    }

    if (max == 0)
        return 0;

    for (int i = 0; i < 10; i++) {
        if (counts[i] == max) {
            if (i == 0) printf("SE\n");
            else if (i == 1) printf("CE\n");
            else if (i == 2) printf("RLF\n");
            else if (i == 3) printf("OLE\n");
            else if (i == 4) printf("TLE\n");
            else if (i == 5) printf("MLE\n");
            else if (i == 6) printf("FLE\n");
            else if (i == 7) printf("RE\n");
            else if (i == 8) printf("WA\n");
            else if (i == 9) printf("AC\n");
        }
    }

    return 0;
}

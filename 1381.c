#include<stdio.h>
#include<string.h>

void HIGH_PERCISION_MULTIPLICATION(char *stra, char*strb);
int main() {
    int T;
    char stra[400 + 4], strb[400 + 4];
    scanf("%d", &T);
    while (T--) {
        scanf("%s", stra);
        scanf("%s", strb);
        HIGH_PERCISION_MULTIPLICATION(stra, strb);
    }
    return 0;
}

void HIGH_PERCISION_MULTIPLICATION(char *stra, char*strb) {
    int a[400 + 4] = { 0 }, b[400 + 4] = { 0 }, pdt[400 + 4] = { 0 };
    int i, j, v;
    if (!strcmp(stra, "0") || !strcmp(strb, "0")) {
        printf("0\n");
        return;
    }
    for (i = strlen(stra), j = 0; i >= 0; i--, j++) a[j] = stra[i] - '0';
    for (i = strlen(strb), j = 0; i >= 0; i--, j++) b[j] = strb[i] - '0';
    for (i = 1; i <= strlen(stra); i++) {
        v = 0;
        for (j = 1; j <= strlen(strb); j++) {
            pdt[i + j - 1] += a[i] * b[j];
            v = pdt[i + j - 1] / 10;
            pdt[i + j] += v;
            pdt[i + j - 1] %= 10;
        }
    }
    for (i = 400; i >= 1; i--) {
        if (pdt[i] != 0) {
            for (j = i; j >= 1; j--) printf("%d", pdt[j]);
            printf("\n");
            return;
        }
    }
}

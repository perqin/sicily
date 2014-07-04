#include<stdio.h>

int main() {
    int i, sum;
    char a[255 + 1];
    while (gets(a) && a[0] != '#') {
        for (i = 0, sum = 0; a[i] != '\0'; i++) {
            switch (a[i]) {
            case ' ': a[i] = 0; break;
            default: a[i] = a[i] - 'A' + 1;
            }
            sum += (i + 1)*a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}

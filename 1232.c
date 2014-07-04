#include<stdio.h>

int main() {
    int i, n, k, o[10 + 1], sum;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &k);
        for (i = 0, sum = 0; i < k; i++) {
            scanf("%d", &o[i]);
            sum += o[i];
        }
        printf("%d\n", sum - k + 1);
    }
    return 0;
}
